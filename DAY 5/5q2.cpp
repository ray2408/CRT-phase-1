
#include <iostream>
using namespace std;

void msg(){
    cout<<"hello world"<< endl;
}

string msg1(){
    return "Hi";
}

int add(int a, int b){
    return a + b;
    cout<<endl;
}

void sub(int r,int s){
    cout<<r-s<<endl;
}

int main(){
    msg();
    string ans= msg1();
    cout<<ans<<endl;
    int sum1= add(4,6);
    cout<<sum1<<endl;
    sub(8,2);
}