#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
    cout<< "ADD:" <<ptr <<endl;
    cout<<"Value:"<< *ptr<<endl;

    *ptr = 20;
    cout<<"Value:"<< *ptr <<endl;
    cout<<"value:"<< a<< endl;
}