#include<iostream>
using namespace std; 

class exclass{
    public:
    int p;

    void student(){
        cout<<"enter the marks:";
        cin>>p;

    if (p >= 90 && p <= 100)
        cout << "A";
    else if (p >= 80)
        cout << "B";
    else if (p >= 70)
        cout << "C";
    else if (p >= 60)
        cout << "D";
    else if (p >= 0)
        cout << "F";
    else
        cout << "Invalid Input";
    }
};

int main(){
    exclass obj1;
    obj1.student();
    return 0;

}