#include<iostream>
using namespace std;
class atm{
    private:
    int balance;
    public:
    atm(int balance){
        this->balance = balance;
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
    void showbalance(){
        cout<<"Current balance: "<< balance << endl;
    }
};

int main()
{
    atm a(8045);
    a.showbalance();
    a.withdraw(500);
    a.showbalance();

    return 0;
}