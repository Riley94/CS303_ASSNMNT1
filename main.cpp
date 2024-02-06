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
    cout << "Initial vector:" << endl;
    v.print();
    cout << endl;
    v.remove(3);
    cout << "After removing the number at index 3:" << endl;
    v.print();
    cout << endl;
    v.update(2, 100);
    cout << "After updating the number at index 2 to 100:" << endl;
    v.print();
    cout << endl;
    cout << "The number 100 is at index " << v.contains(100) << endl;
    cout << endl;
    v.update(1000, 2);

    return 0;
}