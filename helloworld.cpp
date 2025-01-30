#include "helloworld.h"

void printHelloWorldFromFile(const std::string& filename)
{
    std::ifstream file(filename);
    if(!file) {
        std::cerr << "Error: 파일을 열 수 없습니다." << filename << std::endl;
        return;
    }

    std::string line;
    while(std::getline(file, line)){
         std::cout << line << std::endl;
    }
    file.close();
}
