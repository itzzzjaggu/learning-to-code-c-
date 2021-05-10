#include <iostream>
using namespace std;

int main(){
    int score {};
    cout<<"Enter your score of the exam(0-100 : "<<endl;
    cin>>score;
    char grade {};
    if (score >=0 && score <=100){
        if(score>=90)
            grade = 'A';
        else if(score>=80)
            grade = 'B';
        else if(score>=70)
            grade = 'C';
        else if(score>=60)
            grade = 'D';
        else
            grade = 'F';

        cout<<"Your grade is "<<grade<<endl;
        if(grade=='F'){
            cout<<"You ll have to repeat the class again: "<<endl;
        }
        else{
            cout<<"You have passed your class congo"<<endl;
        }
    }
    else{
        cout<<"Please enter a valid score between 0-100 this score is invalid";
    }
    return 0;
    }