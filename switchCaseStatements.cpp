#include <iostream>
using namespace std;

int main(){
    // char grade {};
    // cout<<"Enter the grade you want to check marks corresponding to:"<<endl;
    // cin>>grade;
    // switch (grade)
    // {
    // case 'a':
    // case 'A':
    // cout<<"You ll need 90-100 go study hard.";
    //     break;
    // case 'b':
    // case 'B':
    // cout<<"You need marks between 80-90 go study.";
    //     break;
    // case 'c':
    // case 'C':
    // cout<<"You ll need marks between 70-80 to get this grade";
    //     break;
    // case 'd':
    // case 'D':
    // cout<<"You just need marks from 60-70";
    //     break;
    // case 'f':
    // case 'F':
    // {
    //     char confirm {};
    //     cout<<"Are you sure you want F grade say (Y/N)";
    //     cin>>confirm;
    //     if (confirm ='y' ){
    //         cout<<"You ll need marks above 50-60 but you should try for higher score";
    //     }
    //     else if(confirm= 'n'){
    //         cout<<"Ok";
    //     }
    // }
    //     break;

    // default:
    // cout<<"Enter a valid grade";
    // }
// ---> john gotti
    // enum Direction{
    //     left,right,up,down
    // };
    // Direction location {left};
    // switch (location)
    // {
    // case left:
    //     cout<<"Go in the left direction then its all your choice";
    //     break;
    
    // default:
       
    //    cout<<"Ok the program ran successfully";
    // }


    //==================================================================
    //conditional operator
    //==================================================================


int a{10},b{20};
int score {92};
int result {};

result = (a>b) ? a : b;

result = (a < b) ? a : b;

result = (b != 0) ? (a/b) : 0;

cout << ((score > 90) ? "Excellent" : "Good" );



    return 0;
}