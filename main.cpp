#include <iostream>
#include "platform.h"
#include "helloworld.h"
#include "array.h"

int main() {
    // "File HelloWorld" 섹션 시작을 알리는 메시지 출력
    std::cout << "--- File HelloWorld ---\n";
    // 파일에서 Hello World 메시지를 읽어서 출력
    printHelloWorldFromFile("helloworld.txt");
    // 플랫폼 특정 함수 호출
    platform_specific_function();

    // "Array" 섹션 시작을 알리는 메시지 출력
    std::cout << "--- Array ---\n   ";
    // Array 객체 생성
    Array array;
    // 배열에 1, 2, 3을 순서대로 삽입
    array.insert(1);
    array.insert(2);
    array.insert(3);
    // 배열의 모든 요소를 화면에 출력
    array.display();
    
    return 0;
}