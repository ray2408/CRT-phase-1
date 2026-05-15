#include<iostream>
using namespace std;

bool ispow(int n){
    if (n==0)
        return false;
    if (n==1)
        return true;    
    return(n%2==0 && ispow(n/2));
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (ispow(n))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}