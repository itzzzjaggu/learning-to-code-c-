// Shipping cost calculator...

#include <iostream>
using namespace std;

int main(){
    int length{},breadth{},height{};
    const double base_charge {2.50};
    int volume {};
    cout<<"Enter the dimensions that are length,breadth and height: "<<endl;
    cin>>length>>breadth>>height;
    volume = length * breadth * height;
    if (length <=10 && breadth<=10 && height<=10){
        if (volume < 100 && volume<=500){
            cout<<"Shipping costs will be = $"<<base_charge + (base_charge*0.1)<<endl;
        }
        else if(volume > 500){
            cout<<"Shipping costs will be = $"<<base_charge + (base_charge*0.25)<<endl;
        }
        else{
            cout<<"Shipping costs will be = $"<<base_charge<<endl;
        }
    }
    else{
        cout<<"The length,breadth and height should be less than 10 inches"<<endl;
    }

    

    return 0;
}