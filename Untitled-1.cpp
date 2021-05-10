#include <iostream>
using namespace std;
int main(){
    int dollar,quarter,dime,nickel,penny {0};
    int cent {1};
    
    cout<<"Enter the cents you want to get change for: "<<endl;
    int exchange_needed {0};
    cin>>exchange_needed;
    
    dollar = 100 * cent;
    quarter = 25 * cent;
    dime = 10 * cent;
    nickel = 5 * cent;
    penny = 1 * cent;
    int total0 = exchange_needed % dollar;
    int total_0 = exchange_needed / dollar;
    int total1 = total0 % quarter;
    int total_1 = total0 / quarter;
    int total2 = total1 % dime;
    int total_2 = total1 / dime;
    int total3 = total2 % nickel;
    int total_3 = total2 / nickel;
    int total4 = total3 % penny;
    int total_4 = total3 / penny;
    
    cout<<"You can provide the change as follows:"<<endl;
    cout<<"You can provide in dollars: "<<total_0<<endl;
    cout<<"You can provide in quaters: "<<total_1<<endl;
    cout<<"You can provide in dimes: "<<total_2<<endl;
    cout<<"You can provide in nickel: "<<total_3<<endl;
    cout<<"You can provide in penny: "<<total_4<<endl;

    return 0;
}