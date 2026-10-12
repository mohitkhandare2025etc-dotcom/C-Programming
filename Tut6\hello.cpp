#include <iostream>              
using namespace

class Complex                     // Defines a class named Complex
{
    int real, imag;               // Declares real and imaginary parts

public:                           // Makes the following members public

    Complex(int r = 0, int i = 0) // Constructor with default values
    {
        real = r;                 // Assigns value to real part
        imag = i;                 // Assigns value to imaginary part
    }

    Complex operator-(Complex c)  // Overloads the - operator
    {
        Complex temp;             // Creates a temporary Complex object
        temp.real = real - c.real;// Subtracts the real parts
        temp.imag = imag - c.imag;// Subtracts the imaginary parts
        return temp;              
    }

    void display()                // Defines a function to display complex number
    {
        cout << real << " + "      // Displays the real part
             << imag << "i" << endl; // Displays the imaginary part
    }
};

int main()                        
{
    Complex c1(5, 6);             // Creates first complex number: 5 + 6i
    Complex c2(2, 3);             // Creates second complex number: 2 + 3i

    Complex c3 = c1 - c2;         // Subtracts c2 from c1 using overloaded -

    cout << "First complex number: ";  
    c1.display();                 // Displays the first complex number

    cout << "Second complex number: "; 
    c2.display();                 // Displays the second complex number

    cout << "Subtraction: ";      
    c3.display();                 // Displays the subtraction result

    return 0;                     
}
