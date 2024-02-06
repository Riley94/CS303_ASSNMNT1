#include "MyVector.h"

// constructor
MyVector::MyVector()
{
    size = 0;
    capacity = 10;
    theVector = new int[capacity];
}

// destructor
MyVector::~MyVector()
{
    delete[] theVector;
}

// check to see if the vector contains the given number
int MyVector::contains(int num) const
{
    for (int i = 0; i < size; i++)
    {
        if (theVector[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// append a number to the end of the vector
void MyVector::push_back(int num)
{
    try {
        if (size == capacity)
        {
            capacity *= 2;
            int* temp = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                temp[i] = theVector[i];
            }
            delete[] theVector;
            theVector = temp;
        }
        theVector[size] = num;
        size++;
    }
    catch (...)
    {
        cout << "An unknown error occurred." << endl;
        return;
    }
}

// change the value at the given index to the given number
void MyVector::update(int index, int num) const
{
    // check to see if the index is valid
    try {
        if (index < 0 || index >= size)
        {
            throw index;
        }
        theVector[index] = num;
    }
    catch (int index)
    {
        cout << "Index " << index << " is out of bounds." << endl;
        return;
    }
    catch (...)
    {
        cout << "An unknown error occurred." << endl;
        return;
    }
}

// remove the number at the given index
void MyVector::remove(int index)
{
    if (index >= 0 && index < size)
    {
        for (int i = index; i < size - 1; i++)
        {
            theVector[i] = theVector[i + 1];
        }
        size--;
    }
}

// print the vector
void MyVector::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << theVector[i] << " ";
    }
    cout << endl;
}