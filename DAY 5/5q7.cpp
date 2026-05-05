//swap two numbers using pointers//

#include <iostream>
using namespace std;

void swapn(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    swapn(&a,&b);
    cout<<a<<" "<<b;
}