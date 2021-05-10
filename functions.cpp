#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

// int main(){
    // double num{};
    // cout<<"Enter a number:";
    // cin>>num;

    // cout<<"The sqrt of "<<num<<" is: "<<sqrt(num)<<endl;
    // cout<<"The cube root of "<<num<<" is: "<<cbrt(num)<<endl;

    // cout<<"The sine of "<<num<<" is: "<<sin(num)<<endl;
    // cout<<"The cosine of "<<num<<" is: "<<cos(num)<<endl;

    // cout<<"The ceil value of "<<num<<" is: "<<ceil(num)<<endl;
    // cout<<"The floor value of "<<num<<" is: "<<floor(num)<<endl;
    // cout<<"The round of the number is "<<num<<" is: "<<round(num)<<endl;

    // double power{};
    // cout<<"Enter the power to raise the number to:";
    // cin>>power;

    // cout<<"The "<<num<<" raised to power "<<power<<" is "<<pow(num,power)<<endl;

    //Random Numbers-----------------------------------------------------------------
    // int random_number{};
    // size_t count{10};
    // int min{1};
    // int max{6};

    // cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
    // srand(time(nullptr));

    // for(size_t i{1};i<=count;++i){
    //     random_number = rand() % max + min;
    //     cout<<random_number<<endl;
    // }

    // cout<<endl;
    //AreaCalculateFunction

// const double pi{3.14159};

// double calc_area_circle(double);
// double calc_volume_cylinder(double,double);
// void area_circle();
// void volume_cylinder();

// int main(){
//     area_circle();
//     area_circle();
//     volume_cylinder();


// return 0;

// }

// double calc_area_circle(double radius){
//     return pi*radius*radius;
// }

// double calc_volume_cylinder(double radius,double height){
//     // return pi*radius*radius*height;
//     return calc_area_circle(radius)*height;
// }
 
// void area_circle(){
//         double radius{};
//         cout<<"\nEnter the radius of the circle:";
//         cin>>radius;
//         cout<<"The area of a circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
// }

// void volume_cylinder(){
//     double radius{};
//     double height{};
//     cout<<"\nEnter the radius of the cylinder: ";
//     cin>>radius;
//     cout<<"\nEnter the height of the cylinder: ";
//     cin>>height;

//     cout<<"The volume of the cylinder with radius "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;

// }

//Functions -->Actual and Formal Parameters

// void pass_by_value1(int num);
// void pass_by_value2(string s);
// void pass_by_value3(vector <string> v);
// void print_vector(vector <string> v);

// void pass_by_value1(int num){
//     num=1000;
// }

// void pass_by_value2(string s){
//     s="Changed";
// }

// void pass_by_value3(vector <string> v){
//     v.clear();
// }

// void print_value(vector <string> v){
//     for(auto s: v)
//         cout<<s<<" ";
//     cout<<endl;
// }

// int main(){

//     int num{10};
//     int another_num{20};

//     cout<<"Before calling function pass_by_value1:"<<num<<endl;
//     pass_by_value1(num);
//     cout<<"After calling function pass_by_value1: "<<num<<endl;

//     cout<<"another number before calling pass_by_value1:"<<another_num<<endl;
//     pass_by_value1(another_num);
//     cout<<"another number after calling pass_by_value1:"<<another_num<<endl;

//     string name{"Frank"};
//     cout<<"string name before calling pass_by_value2:"<<name<<endl;
//     pass_by_value2(name);
//     cout<<"string name after calling pass_by_value2:"<<name<<endl;

//     vector <string> stooges {"Larry","Moe","Curly"};
//     cout<<"stooges before calling pass_by_value3:"<<endl;
//     print_value(stooges);
//     pass_by_value3(stooges);
//     cout<<"stooges after calling pass_by_value3:"<<endl;
//     print_value(stooges);

//     cout<<endl;
    







// return 0;

// }

//Functions Default arguments.........................................................

// double calc_cost(double base_cost,double tax_rate=0.06,double shipping = 3.50);

// void greetings(string name,string prefix = "Mr",string suffix = "");

// double calc_cost(double base_cost,double tax_rate,double shipping){
//     return base_cost+=(base_cost*tax_rate)+shipping;
// }

// void greetings(string name,string prefix,string suffix){
//     cout<<"Hello "<<prefix+ " "+name+ " "+ suffix<<endl;
// }

// int main(){
//     double cost{0};
//     cost = calc_cost(100.0,0.08,4.25);

//     cout<<fixed<<setprecision(2);
//     cout<<"The Cost is: "<<cost<<endl;

//     cost=calc_cost(100.0,0.08);
//     cout<<"The Cost is: "<<cost<<endl;

//     cost=calc_cost(200.0);
//     cout<<"The Cost is: "<<cost<<endl;

//     greetings("Glenn Jones","Mr","M.D");
//     greetings("James Rogers","Professor","Ph.D.");
//     greetings("Frank Miller","Dr");
//     greetings("William Smith");

//     cout<<endl;

//     return 0;

// }

//Function Overloading .....................................................................

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector <string>);

void print(int num){
    cout<<"Printing int: "<<num<<endl;
}

void print(double num){
    cout<<"Printing double: "<<num<<endl;
}

void print(string s){
    cout<<"Printing string: "<<s<<endl;
}

void print(string s,string t){
    cout<<"Printing 2 strings"<<s<<" and "<<t<<endl;
}

void print(vector <string> v){
    cout<<"Printing vector of strings: "<<endl;
    for(auto s:v){
        cout<<s+ " ";
    }
    cout<<endl;
}


int main(){

    print(100);
    print('A');

    print(125.2);
    print(125.2F);

    print("C style string");
    string s {"C++ style string"};
    print(s);

    print("C style string",s);

    vector <string> three_stooges{"Larry","Moe","Green"};
    print(three_stooges);

    cout<<endl;


    return 0;

}



















    

