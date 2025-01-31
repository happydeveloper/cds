#include <iostream>
#include "platform.h"
#include "helloworld.h"

#include "array.h"

int main() {
    std::cout << "--- File HelloWorld ---\n";
    printHelloWorldFromFile("helloworld.txt");
    platform_specific_function();

    std::cout << "--- Array ---\n   ";
    Array array;
    array.insert(1);
    array.insert(2);
    array.insert(3);
    array.display();
    
    return 0;
}