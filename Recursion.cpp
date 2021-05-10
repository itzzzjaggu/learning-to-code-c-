#include <iostream>

using namespace std;


// unsigned long long fibonacchi(unsigned long long n);

// unsigned long long fibonacchi(unsigned long long n){
//     if(n<=1){
//         return n;
//     }
//     return fibonacchi(n-1) + fibonacchi(n-2);
// }

// int main(){
//     cout<<fibonacchi(5)<<endl;
//     cout<<fibonacchi(30)<<endl;
//     cout<<fibonacchi(100)<<endl;
// }

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n){
    if(n==0)
    return 1;
    return n*factorial(n-1);
}

int main(){
    cout<<factorial(3)<<endl;
    cout<<factorial(5)<<endl;
    cout<<factorial(10)<<endl;
    cout<<factorial(300)<<endl;

    return 0;
}