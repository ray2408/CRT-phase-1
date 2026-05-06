#include<iostream>
using namespace std; 

class student{
private:
int regno=100;
    public:
    string name;
    int rollno;

    student(){
        name="Riya";
        rollno = 10;
    }
    void show(){
        cout<< "Name: " << name<< endl;
        cout<< "rollno: "<< rollno<<endl;
        cout<< "Default constructor is called"<<endl;
    }
};

int main(){
    student s1;
    s1.show();

    return 0;
}
