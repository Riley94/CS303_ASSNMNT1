#include "MyVector.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    MyVector v;
    ifstream fin("A1input.txt");

    // read in the numbers from the file
    int num;
    while (fin >> num)
    {
        v.push_back(num);
    }
    v.print();
    v.remove(3);
    v.print();
    v.update(2, 100);
    v.print();
    cout << v.contains(100) << endl;
    v.update(1000, 2);

    return 0;
}