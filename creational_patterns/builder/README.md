# Builder
## Intent
**Builder** is a creational design pattern that lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

![](imgs/builder-en.png)

## Problem
Imagine a complex object that requires laborious, step-by-step initialization of many fields and nested objects. Such initialization code is usually buried inside a monstrous constructor with lots of parameters. Or even worse: scattered all over the client code.

![](imgs/problem1.png)

*You might make the program too complex by creating a subclass for every possible configuration of an object.*

For example, let’s think about how to create a `House` object. To build a simple house, you need to construct four walls and a floor, install a door, fit a pair of windows, and build a roof. But what if you want a bigger, brighter house, with a backyard and other goodies (like a heating system, plumbing, and electrical wiring)?

The simplest solution is to extend the base `House` class and create a set of subclasses to cover all combinations of the parameters. But eventually you’ll end up with a considerable number of subclasses. Any new parameter, such as the porch style, will require growing this hierarchy even more.

There’s another approach that doesn’t involve breeding subclasses. You can create a giant constructor right in the base `House` class with all possible parameters that control the house object. While this approach indeed eliminates the need for subclasses, it creates another problem.

![](imgs/problem2.png)

*The constructor with lots of parameters has its downside: not all the parameters are needed at all times.*

In most cases most of the parameters will be unused, making **[the constructor calls pretty ugly](https://refactoring.guru/smells/long-parameter-list)**. For instance, only a fraction of houses have swimming pools, so the parameters related to swimming pools will be useless nine times out of ten.

## Solution
The Builder pattern suggests that you extract the object construction code out of its own class and move it to separate objects called *builders*.

![](imgs/solution1.png)

*The Builder pattern lets you construct complex objects step by step. The Builder doesn’t allow other objects to access the product while it’s being built.*

The pattern organizes object construction into a set of steps (`buildWalls`, `buildDoor`, etc.). To create an object, you execute a series of these steps on a builder object. The important part is that you don’t need to call all of the steps. You can call only those steps that are necessary for producing a particular configuration of an object.

Some of the construction steps might require different implementation when you need to build various representations of the product. For example, walls of a cabin may be built of wood, but the castle walls must be built with stone.

In this case, you can create several different builder classes that implement the same set of building steps, but in a different manner. Then you can use these builders in the construction process (i.e., an ordered set of calls to the building steps) to produce different kinds of objects.

![](imgs/builder-comic-1-en.png)

*Different builders execute the same task in various ways.*

For example, imagine a builder that builds everything from wood and glass, a second one that builds everything with stone and iron and a third one that uses gold and diamonds. By calling the same set of steps, you get a regular house from the first builder, a small castle from the second and a palace from the third. However, this would only work if the client code that calls the building steps is able to interact with builders using a common interface.

### Director
You can go further and extract a series of calls to the builder steps you use to construct a product into a separate class called *director*. The director class defines the order in which to execute the building steps, while the builder provides the implementation for those steps.

![](imgs/builder-comic-2-en.png)

*The director knows which building steps to execute to get a working product.*

Having a director class in your program isn’t strictly necessary. You can always call the building steps in a specific order directly from the client code. However, the director class might be a good place to put various construction routines so you can reuse them across your program.

In addition, the director class completely hides the details of product construction from the client code. The client only needs to associate a builder with a director, launch the construction with the director, and get the result from the builder.

## Example
Create document in HTML format and text format. It is possible to create different document in the same construction process.

- [UML of example builder](https://htmlpreview.github.io/?https://github.com/takaakit/uml-diagram-for-cpp-design-pattern-examples/blob/master/creational_patterns/builder/DiagramMap.html)

![](imgs/uml-builder.jpg)

- Stucture
    1. The `Builder` interface declares product construction steps that are common to all types of builders.
    2. `HTMLBuilder` and `PlainTextBuilder` provide different implementations of the construction steps. Concrete builders may produce products that don’t follow the common interface.
    3. The `Director` class defines the order in which to call construction steps, so you can create and reuse specific configurations of products.
    4. The `Main` must associate one of the builder objects with the director. Usually, it’s done just once, via parameters of the director’s constructor. Then the director uses that builder object for all further construction. However, there’s an alternative approach for when the client passes the builder object to the production method of the director. In this case, you can use a different builder each time you produce something with the director.