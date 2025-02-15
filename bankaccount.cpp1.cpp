//author: Anthony Ndungu
// Date: 2025/15/02
// Description: A program that creates a bank account with a balance and account holder name.
// The program will have a function to set the account holder name and balance, and another function to get the account holder name and balance.
// The program will then create a bank account object and set the account holder name and balance, and then get the account holder name and balance and print them to the console.
// The program will then create another bank account object and set the account holder name and balance, and then get the account holder name and balance and print them to the console.
// Admission number:BSCIT-05-0097/2024
#include<iostream>//cout,cin
using namespace std;//cout,cin,endl
class Bank account{
    private://access specifier
    string account holder;
    double balance;
      
};
public:
    void setAccountHolder(string name) {
        account_holder = name;
    }

    string getAccountHolder() {
        return account_holder;
    }

    void setBalance(double bal) {
        balance = bal;
    }

    double getBalance() {
        return balance;
    }
int main(){
   Bank account antonito;
   antonito.account holder="Antonito";
   antonito.balance=100,000,000;
   cout<<"Account holder:",,antonito.account holder<<endl;
   cout<<"balance:"<<antonito.balance<<endl;
    return 0;
}

