#include <iostream>
using namespace std;

int main()
{
    // interger - int - 4byte
    // declaration
    int a;
    cout << "Garbage value " << a << endl;
    // intialisation
    int num = 10;

    // cout << a << endl;
    cout << num << endl;

    // char - 1byte
    char ch = 'a';
    cout << ch << endl;

    // float - 4byte
    float point = 1.2;
    cout << point << endl;

    // double - 8byte
    double n = 1.234;
    cout << n << endl;

    // long - 4byte
    long number = 26;
    cout << number << endl;

    cout << "Size of data types" << endl;

    cout << sizeof(num) << endl;
    cout << sizeof(ch) << endl;
    cout << sizeof(point) << endl;
    cout << sizeof(n) << endl;
    cout << sizeof(number) << endl;

    return 0;
}