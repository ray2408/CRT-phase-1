#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string regNo;
    string email;
    string phoneNo;
    float marks;
    char grade;

public:
    // Default Constructor
    Student()
    {
        name = "Not Assigned";
        rollNo = 0;
        regNo = "N/A";
        email = "N/A";
        phoneNo = "N/A";
        marks = 0;
        grade = 'F';
    }

    // Parameterized Constructor
    Student(string n, int r, string reg, string e,
            string phone, float m, char g)
    {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phoneNo = phone;
        marks = m;
        grade = g;
    }

    // Function to display student details
    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Reg No    : " << regNo << endl;
        cout << "Email     : " << email << endl;
        cout << "Phone No  : " << phoneNo << endl;
        cout << "Marks     : " << marks << endl;
        cout << "Grade     : " << grade << endl;
    }
};

int main()
{
    // Object using default constructor
    Student s1;

    // Object using parameterized constructor
    Student s2(
        "Rahul Sharma",
        101,
        "REG2026001",
        "rahul@gmail.com",
        "9876543210",
        88.5,
        'A'
    );

    s1.display();
    s2.display();

    return 0;
}