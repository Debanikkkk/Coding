#include <iostream>
#include <string>
using namespace std;

class Bank{
    private:
    double balance;

    public:
    Bank(double b): balance(b){};

    virtual double getBalance(){
        cout<<balance;
        return balance;
    }

    virtual void setBalance(double deposit){
        balance+=deposit;
        cout<<balance;
    }   
};

int main(){
    Bank* b1=new Bank(123);

    b1->getBalance();
    b1->setBalance(32);
    b1->getBalance();
    return 0;

}