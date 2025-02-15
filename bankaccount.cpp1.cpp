//author: Anthony Ndungu
// Date: 2025/15/02
// Description: A program that creates a bank account with a balance and account holder name.
// The program will have a function to set the account holder name and balance, and another function to get the account holder name and balance.
// The program will then create a bank account object and set the account holder name and balance, and then get the account holder name and balance and print them to the console.
// The program will then create another bank account object and set the account holder name and balance, and then get the account holder name and balance and print them to the console.
// Admission number:BSCIT-05-0097/2024
#include<iostream>//cout,cin
#include<string>//string
using namespace std;//cout,cin,endl
class Bankaccount{
    private://access specifier
    string account_holder;
    double balance;//data members
      
};
public:
    void setAccountHolder(string name) {//member function
        account_holder = name;
    }

    string getAccountHolder() {//member function
        return account_holder;
    }

    void setBalance(double bal) {
        balance = bal;//member function
    }

    double getBalance() {
        return balance;
    }
int main(){//main function
   Bank account antonito;//object
   antonito.account_holder="Antonito";//object
   antonito.balance=100,000,000;
   cout<<"Account holder:",,antonito.account holder<<endl;
   cout<<"balance:"<<antonito.balance<<endl;
    return 0;//end of the program
}

