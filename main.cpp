#include <iostream>
#include "platform.h"
#include "helloworld.h"

int main() {
    std::cout << "--- File HelloWorld ---\n";
    printHelloWorldFromFile("helloworld.txt");
    platform_specific_function();
    return 0;
}