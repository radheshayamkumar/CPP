#include <iostream>
using namespace std;

// Inline function to calculate cube
inline int cube(int num)
{
    return num * num * num;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Cube of " << number << " is " << cube(number);

    return 0;
}