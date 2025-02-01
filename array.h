#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

// Array 클래스: 템플릿을 사용하여 다양한 타입의 배열을 관리하는 클래스
template <typename T>
class Array {
    private:
        // 배열의 최대 크기를 100으로 설정
        static const int MAX_SIZE = 100;
        // T 타입의 요소를 저장하는 배열
        T arr[MAX_SIZE];
        // 현재 배열에 저장된 요소의 개수
        int size;

    public:
        // 기본 생성자: 배열을 초기화
        Array() : size(0) {}
        
        // 배열에 새로운 값을 추가하는 함수
        void insert(T value) {
            if (size < MAX_SIZE) {
                arr[size++] = value;
            }
        }
        
        // 지정된 인덱스의 요소를 제거하는 함수
        void remove(int index) {
            if (index >= 0 && index < size) {
                for (int i = index; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
            }
        }
        
        // 배열의 모든 요소를 출력하는 함수
        void display() {
            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
};

#endif