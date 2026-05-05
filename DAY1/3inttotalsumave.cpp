#include <iostream>
using namespace std;

int main(){
    int a,b,c,sum1,ave;
    cout<<"enter the numbers";
    cin>>a>>b>>c;

    sum1=a+b+c;
    ave=sum1/3;
    cout<<"the sum of the three numbers is:"<<sum1;
    cout<<"the average of the three numbers is:"<<ave;

    return 0;
}