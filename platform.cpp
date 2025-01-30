#include <iostream>
#include "platform.h"

#if defined(_WIN32) || defined(_WIN64)
void platform_specific_function() {
    std::cout << "원도우에서 구동 중, Running on Windows" << std::endl;
}
#elif defined(__APPLE__) || defined(__MACH__)
void platform_specific_function() {
    std::cout << "맥에서 구동 중, Running on macOS" << std::endl;
}
#elif defined(__linux__)
void platform_specific_function() {
    std::cout << "리눅스에서 구동 중, Running on Linux" << std::endl;
}
#else
void platform_specific_function() {
    std::cout << "알수 없음, Unknown platform" << std::endl;
}
#endif
