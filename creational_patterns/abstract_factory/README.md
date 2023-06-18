# Abstract Factory

## Intent
**Abstract Factory** is a creational design pattern that lets you produce families of related objects without specifying their concrete classes.

![](imgs/abstract-factory-en.png)

## Problem
Imagine that you’re creating a furniture shop simulator. Your code consists of classes that represent:
- A family of related products, say: `Chair` + `Sofa` + `CoffeeTable`.
- Several variants of this family. For example, products `Chair` + `Sofa` + `CoffeeTable` are available in these variants: `Modern`, `Victorian`, `ArtDeco`.

![](imgs/problem-en.png)

*Product families and their variants.*

You need a way to create individual furniture objects so that they match other objects of the same family. Customers get quite mad when they receive non-matching furniture.

![](imgs/abstract-factory-comic-1-en.png)

*A Modern-style sofa doesn’t match Victorian-style chairs.*

Also, you don’t want to change existing code when adding new products or families of products to the program. Furniture vendors update their catalogs very often, and you wouldn’t want to change the core code each time it happens.

## Solution
The first thing the Abstract Factory pattern suggests is to explicitly declare interfaces for each distinct product of the product family (e.g., chair, sofa or coffee table). Then you can make all variants of products follow those interfaces. For example, all chair variants can implement the `Chair` interface; all coffee table variants can implement the `CoffeeTable` interface, and so on.

![](imgs/solution1.png)

*All variants of the same object must be moved to a single class hierarchy.*

The next move is to declare the Abstract Factory—an interface with a list of creation methods for all products that are part of the product family (for example, `createChair`, `createSofa` and `createCoffeeTable`). These methods must return abstract product types represented by the interfaces we extracted previously: `Chair`, `Sofa`, `CoffeeTable` and so on.

![](imgs/solution2.png)

*Each concrete factory corresponds to a specific product variant.*

Now, how about the product variants? For each variant of a product family, we create a separate factory class based on the `AbstractFactory` interface. A factory is a class that returns products of a particular kind. For example, the `ModernFurnitureFactory` can only create `ModernChair`, `ModernSofa` and `ModernCoffeeTable` objects.

The client code has to work with both factories and products via their respective abstract interfaces. This lets you change the type of a factory that you pass to the client code, as well as the product variant that the client code receives, without breaking the actual client code.

![](imgs/abstract-factory-comic-2-en.png)

*The client shouldn’t care about the concrete class of the factory it works with.*

Say the client wants a factory to produce a chair. The client doesn’t have to be aware of the factory’s class, nor does it matter what kind of chair it gets. Whether it’s a Modern model or a Victorian-style chair, the client must treat all chairs in the same manner, using the abstract `Chair` interface. With this approach, the only thing that the client knows about the chair is that it implements the `sitOn` method in some way. Also, whichever variant of the chair is returned, it’ll always match the type of sofa or coffee table produced by the same factory object.

There’s one more thing left to clarify: if the client is only exposed to the abstract interfaces, what creates the actual factory objects? Usually, the application creates a concrete factory object at the initialization stage. Just before that, the app must select the factory type depending on the configuration or the environment settings.

## Example
Creata a hierachical link collections as an HTML file. it can be create in either tabular or list format.

- [UML of example factory abstract](https://htmlpreview.github.io/?https://github.com/takaakit/uml-diagram-for-cpp-design-pattern-examples/blob/master/creational_patterns/abstract_factory/DiagramMap.html)

![](imgs/uml-factory-abstract.jpg)

- Structure
    1. `Item` and `Page` declare interfaces for a set of distinct but related products which make up a product family.
    2. `Link` and `Data` are various implementations of abstract products, grouped by `Item`,  `ListPage` and `TablePage` are various implementations of abstract products, grouped by `Page`,.
    3. `Factory` interface declares a set of methods for creating each of the abstract products.
    4. `ListFactory` and `TableFactory` implement creation methods of the abstract factory. Each concrete factory corresponds to a specific variant of products and creates only those product variants.