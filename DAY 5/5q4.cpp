#include <iostream>
using namespace std;

int tvol(int a){
    return a*30;
}

int main(){
    int r;
    cout<<"enter the no of coffee shots:";
    cin>>r;
    cout<<"The volume of coffee needed is:"<<tvol(r);
}
