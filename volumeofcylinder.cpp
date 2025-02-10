// Anthony ndungu 
// BSCIT-05-0097/2024
#include<iostream>//cout,cin
# define PI 3.14159
using namespace std;//cout,cin,endl
int main(){//main function
    float radius, height, volume;
    cout<<"Enter the radius of the cylinder: ";
    cin>>radius;
    cout<<"Enter the height of the cylinder: ";
    cin>>height;
    //calculate the volume of the cylinder
    volume = PI * radius * radius * height;
    cout<<"The volume of the cylinder is: "<<volume<<endl;
    return 0;
}
