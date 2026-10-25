#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed!";
        }

        cout << "Result = " << (float)a / b << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}

