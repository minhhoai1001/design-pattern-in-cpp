#include <memory>
#include "include/printMessageDisplay.h"

int main(int argc, char* argv[])
{
    std::unique_ptr<Print> print(new PrintMessageDisplay("Nice to meet you!"));
    print->printWeak();
    print->printStrong();

    return 0;
}

