#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    vector <int> nums {10,20,30,40,50};


    for(int i {0};i < nums.size();++i)
        cout<<nums[i]<<endl;

    int scores[] {100,90,97};

    for(auto score:scores)
        cout<<score<<endl;

    vector<double> temps {87.2,77.1,80.0,72.5};

    double average_temp {};
    double running_temp {};

    for (auto temp : temps)
    //     running_temp+=temp;

    average_temp=running_temp/temps.size();6

    cout<<fixed<<setprecision(2);
    cout<<average_temp<<endl;

    for ( auto val: {2,34,4,2})
        cout<<val<<endl;
   
    for(auto c:"This is a Test")
        if(c==' ')
            cout<<"\t";
        else
            cout<<c;

    int number{};

    cout<<"Enter an integer between 1 and 5: ";
    cin>>number;

    while (number >=1 && number<=5)
    {
        cout<<"Enter an integer between 1 and 5: ";
        cin>>number;
    }
    cout<<"Thanks";
    
    int num{};
    cout<<"Enter a positive integer to count up to:";
    cin>>num;

    while (num>0)
    {
        cout<<num<<endl;
        --num;
    }
    cout<<"Blast Off";

    bool done {false};
    int number {0};

    while(!done){
        cout<<"Enter an integer between 1 and 5: ";
        cin>>number;
        if(number<=1||number>=5)
            cout<<"Out of range,try again"<<endl;
        else{
            cout<<"Thanks!"<<endl;
            done = true;
        }
    }

    char selection{};

    do{
        double width{},height{};

        cout<<"Enter the width and height seperated by a space: ";
        cin>>width>>height;

        double area = (width* height);
        cout<<"The area is "<<area<<endl;

        cout<<"Calculat another (y/n): ";
        cin>>selection;

        
    }while(selection=='y'||selection=='Y');
    cout<<"The tables of numbers from 1 to 10 are as follows: "<<endl; 

    for(int num1 {1};num1<=10;++num1){
        for(int num2 {1};num2<=10;++num2){
            cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        }
        cout<<"-------------"<<endl;
    }
    vector <vector<int>> vector_2d{
        {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
    };

    for (auto vec:vector_2d){
        for(auto val: vec){
            cout<<val<<"    ";
        }
        cout<<endl;
    }
    
    int data_items {};
    cout<<"How many data itmes do you want: ";
    cin>>data_items;
    vector <int> data{};

    for(int i{};i<data_items;++i){
        int data_values {};
        cout<<"Enter the data values you want to enter:";
        cin>>data_values;
        data.push_back(data_values);
    }

    for(auto val: data){
        cout<<val<<endl;
    }
    cout<<endl;

    cout<<"Displaying Histogram:"<<endl;
    for(auto val: data){
        for(int i {1};i<=val;++i){
            if(i%5==0)
            cout<<"-";
            else
            cout<<"*";
        }
        cout<<endl;
    }

    
    
return 0;



}