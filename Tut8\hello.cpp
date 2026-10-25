#include <iostream>
#include <string>
using namespace std;

class PersonalDetails
{
protected:
    int empId;
    string name;
    int age;

public:
    void getPersonalDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Employee Age: ";
        cin >> age;
    }
};

class DepartmentDetails
{
protected:
    string department;
    int joiningYear;
    int currentYear;

public:
    void getDepartmentDetails()
    {
        cout << "Enter Department Name: ";
        cin.ignore();
        getline(cin, department);

        cout << "Enter Joining Year: ";
        cin >> joiningYear;

        cout << "Enter Current Year: ";
        cin >> currentYear;
    }
};

class Employee : public PersonalDetails, public DepartmentDetails
{
public:
    void display()
    {
        int yearsOfService = currentYear - joiningYear;

        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Joining Year: " << joiningYear << endl;
        cout << "Total Years of Service: "
             << yearsOfService << " years" << endl;
    }
};

int main()
{
    Employee e;

    e.getPersonalDetails();
    e.getDepartmentDetails();
    e.display();

    return 0;
}
