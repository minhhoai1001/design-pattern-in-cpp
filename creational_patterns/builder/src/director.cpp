#include "include/director.h"
#include "include/builder.h"

Director::Director(Builder* builder)
    :builder(builder)
{

}

void Director::buid()
{
    builder->createTitle("Greeting");
    builder->createSection("Morning aand Afternoon");
    builder->createItems({"Good morning.", "Hello."});
    builder->createSection("Evening");
    builder->createItems({"Good evening", "Good night.", "Goodbye"});
    builder->close();
}