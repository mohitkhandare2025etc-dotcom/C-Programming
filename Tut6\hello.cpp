#include <iostream>              
#include <cstring>               
using namespace std;              

class String                       // Defines a class named String
{
    char str[100];                 // Declares a character array to store a string

public:                            // Makes members accessible outside the class

    String(const char s[])         // Parameterized constructor
    {
        strcpy(str, s);            // Copies the given string into str
    }                              

    void Accept()                  // Defines the Accept() function
    {
        cout << "Enter a string: "; 
        cin.getline(str, 100);     // Accepts a string including spaces
    }                              

    void Display()                 // Defines a function to display the string
    {
        cout << "String: " << str; // Prints the string
    }                              

    ~String()                      // Destructor
    {
        cout << "\nDestructor called"; // Displays a message when the object is destroyed
    }                              
};                                 

int main()                         
{
    String s("Hello");             // Calls parameterized constructor
    s.Accept();                    // Calls Accept() to input a string
    s.Display();                   // Displays the entered string
    return 0;                      
}           
