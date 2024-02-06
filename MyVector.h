#pragma once

#include <iostream>

using namespace std;

class MyVector
{
private:
    int* theVector;
    int size;
    int capacity;

public:
    MyVector();
    ~MyVector();

    int contains(int num) const;
    void push_back(int num);
    void update(int index, int num) const;
    void remove(int index);
    void print();
};