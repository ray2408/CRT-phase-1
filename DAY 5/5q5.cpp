#include <iostream>
using namespace std;

int add(int a,int b=3){
    return a+b;
}

int main(){
    int r;
    cout<<"enter the no:";
    cin>>r;
    cout<<add(r,6);
}
