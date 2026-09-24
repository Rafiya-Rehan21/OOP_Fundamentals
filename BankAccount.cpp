#include <iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        double balance;

    public:
        BankAccount(int accNo, double bal) : accountNumber(accNo), balance(bal) {}

        void deposit(int amount){
            balance += amount; 
        }

        void withdraw(int amount){
            if(balance >= amount){
                balance -= amount;
            }
        }

        double getBalance(){
            return balance;
        }
};

int main(){
    BankAccount b(101,1000);
    b.deposit(500);
    b.withdraw(300);
    cout << b.getBalance() << endl;

    return 0;
}