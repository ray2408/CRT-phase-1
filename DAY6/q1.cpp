#include<iostream>
using namespace std; 

class student{
private:
int regno=100;
    public:
    string name;
    int rollno;

    void display(){
        cout<< "Name: " << name<< endl;
        cout<< "rollno: "<< rollno<<endl;
        cout<< "regno: " << regno<< endl;
        regno++;

    }
};

int main(){
    student s1;
    student s2;
    s1.name="Rakhi";
    s1.rollno =23;
    s2.name ="Max";
    s2.rollno =24;
    s1.display();
    s2.display();

    return 0;
}
