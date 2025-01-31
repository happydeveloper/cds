#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

// Array 클래스: 정수 배열을 관리하는 클래스
class Array {
    private:
        // 배열의 최대 크기를 100으로 설정
        static const int MAX_SIZE = 100;
        // 정수를 저장하는 배열
        int arr[MAX_SIZE];
        // 현재 배열에 저장된 요소의 개수
        int size;

    public:
        // 기본 생성자: 배열을 초기화
        Array();
        // 배열에 새로운 값을 추가하는 함수
        void insert(int value);
        // 지정된 인덱스의 요소를 제거하는 함수
        void remove(int index);
        // 배열의 모든 요소를 출력하는 함수
        void display();
};

#endif