#include <iostream>
using namespace std;

int bill(int &a){
    int disc = a -(0.1 * a);
    return disc;
}

int main(){
    int billam;
    cout<<"enter the bill amount:";
    cin>>billam;
    cout<<"the final bill amount is:"<<bill(billam);
    return 0;
}
