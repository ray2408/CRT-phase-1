#include<iostream>
using namespace std;
class atm {
    private:
    int balance;
    public:
    atm(int balance) {
        this->balance = balance;
    }
    void setbalance(int balance){
        this->balance= balance;
    }

    void withdraw(int amount){
        if(amount>balance){
            cout<<"insufficient balance";
        }
        else{
            balance-=amount;
            cout<<"amount withdrawn: "<< amount <<endl;
        }
    }
    int getbalance(){
        return balance;
    }
};

int main()
{
    int n;
    cin>>n;
    atm a(n);
    a.setbalance(n);
    cout<< "Balance is: "<<a.getbalance()<< endl;
    a.withdraw(500);
    cout<< "Balance is: "<<a.getbalance()<< endl;


    return 0;
}