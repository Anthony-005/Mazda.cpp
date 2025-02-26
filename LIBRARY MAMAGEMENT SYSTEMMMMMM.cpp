//Author:Anthony Ndungu
//Admission Number: BSCIT-05-0097/2024
//this program is used to create a simple library management system
// a parent class named person is created that prompts the user to enter the name
// another class is created named libraryMember that inherits attributes from the other parent class 
// the libraryMember class prompts the user to enter the memberId and the number of books borrowed
// the libraryMember class also has a getter function that returns the memberId and the number of books borrowed
// another class is created named premiumMember that inherits attributes from the libraryMember class
// the premiumMember class prompts the user to enter the membership fee
// the premiumMember class also has a getter function that returns the membership fee
// the main function is created to create objects of the libraryMember and premiumMember classes
// the main function also calls the getter functions to return the memberId, number of books borrowed and the membership fee
// the main function also has a condition that checks if the number of books borrowed is more than 4
// if the number of books borrowed is more than 4, the program will output a message that the user cannot borrow more than 4 books

#include<iostream>//cout,cin
#include<string>
using namespace std;//cout,cin,endl
class Person{
    protected://access specifier
    string name;
    //setter function to initialize the name of the person
    public:
    void setName(string n){
     name=n;}
    //getter function to return the name of the person
     string  getName(){
    return name;
}
};
// a child class is created to inherit attributes from the parent class
class LibraryMember:public Person{
    private:
    int memberId;
    int booksborrowed;
    public:
    //constructor to initialize the name,memberId and booksborrowed
    LibraryMember(string n,int a,int  f){
    name= n;
    memberId= a;
    booksborrowed= f;
    if (booksborrowed>4){
        cout<<"you cannot borrow more than 4 books!"<<endl;
    } 
    //getter functions to return the memberId and the number of booksborrowed
    public:
    int  getmemberId(){
        cout<<"memberId:"<<memberId<<endl;
    }
    void getbooksborrowed(){
        cout<<"booksborrowed:"<<booksborrowed<<endl;
    }
}
};

//another class is created to inherit the attributes of the inherited parent class
class PremiumMember:public LibraryMember{
    private://acces specifier
    double membershipfee;
    public://access specifier
    // constructor to initialize the name,memberId,booksborrowed and membershipFee 
PremiumMember(string n, int a, int f ,double d):LibraryMember(n,a,f){
name-n;
memberId=a;
booksborrowed=f;
membershipfee=d;
}
//getter functions to return the membershipfee for a premium member
public:
void  getmembershipfee(){
    cout<<"membershipfee:"<<membershipfee<<endl;
}
};

int main(){ //main function
    //object of the libraryMember class
    LibraryMember member1("Anthony",1234,3);
    member1.getmemberId();
    member1.getbooksborrowed();
    //object of the premiumMember class
    PremiumMember member2("Anthony",1234,3,500);
    member2.getmembershipfee();
    return 0;
}
