// Anthony Ndungu
// BSCIT-05-0097/2024
#include<iostream>//cout,cin
#include<string>//shows the string
using namespace std;//cout,cin,endl
class car{
    public://access specifier
    string brand;
    string model;
    float price;
    int mileage;
};
public://access specifier
void display(){//function to display the details of the car
    cout<<"Brand: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Mileage: "<<mileage<<endl;
    }
    public://access specifier
    void drive//function that accepts an integer parameter that represents the distance in kilometers driven by the car
    (int distance){
        cout<<"The car has driven "<<distance<<" kilometers"<<endl;
        cout<<"The mileage of the car is "<<mileage<<endl;
    }
    int main(){//main function
        car car1;
        car1.brand="Mazda";
        car1.model="Mazda 3";
        car1.price=20000;
        car1.mileage=12;
        //display the details of the car
        car1.display();
        //simulate the car to drive for 150 miles using the drive function and display the updated mileage
        car1.drive(150);
        return 0;
        //simulate the car to drive for 300 miles and display the updated mileage
        car1.drive(300);
        return 0;
    }
};
