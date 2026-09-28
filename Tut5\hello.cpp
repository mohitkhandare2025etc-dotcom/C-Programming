#include <iostream>
using namespace std;

// Function to multiply two integers
int multiply(int a, int b)
{
    return a * b;
}

// Overloaded function to multiply three integers
int multiply(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    int x, y, z;

    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Product of two integers = " << multiply(x, y) << endl;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    cout << "Product of three integers = " << multiply(x, y, z) << endl;

    return 0;
}

