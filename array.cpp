#include "array.h"

// Array 클래스의 기본 생성자
Array::Array() {
    size = 0;
}


// 배열에 새로운 값을 추가하는 함수
void Array::insert(int value) {
    if (size < MAX_SIZE) {
        arr[size++] = value;
    } else {
        std::cout << "배열이 가득 찼습니다." << std::endl;
    }
}

// 지정된 인덱스의 요소를 제거하는 함수
void Array::remove(int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

void Array::display() {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}