#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
    private:
        static const int MAX_SIZE = 100;
        int arr[MAX_SIZE];
        int size;

    public:
        Array();
        void insert(int value);
        void remove(int index);
        void display();
};

#endif