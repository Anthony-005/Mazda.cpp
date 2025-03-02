// author: Anthony ndungu
// date: 2025-03-01
// description: A program that manages a bank account and a savings account
// using inheritance
// input: name, account number, balance, intrest rate
// output: name, account number, balance

#include<iostream>
using namespace std;
class Accountholder{
    protected:
    string name;
    public:
    void setName(string n){
        name=n;
    }
    void getName(){
        cout<<"Name: "<<name<<endl;
    }
};
class Bankaccount:public Accountholder{
    private:
    int accountnumber;
    double balance;
    //constructor to initialize the account number and balance
public:
Bankaccount(int a,double b){
    accountnumber=a;
    balance=b;
}
void getaccountnumber(){
    cout<<"Account Number: "<<accountnumber<<endl;
}
void getbalance(){
    cout<<"Balance: "<<balance<<endl;
}
class Savingsaccount:public Bankaccount{
    private:
    double IntrestRate;
    public:
    //constructor to initialize the name,account number, balance and intrestrate
    Savingsaccount(string n,int a,double b,double i,int y):Bankaccount(a,b){
        IntrestRate=i;
        name=n;
    }
    void getintrestrate(){
        cout<<"Intrest Rate: "<<IntrestRate<<endl;
    }
}
int main(){
    Savingsaccount s1("Ali",12345,5000,0.05,2);
    s1.getName();
    s1.getaccountnumber();
    s1.getbalance();
    s1.getintrestrate();
    return 0;
}
};


