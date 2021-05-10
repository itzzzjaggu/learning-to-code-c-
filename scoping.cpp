#include <iostream>
#include <vector>
#include <string>

using namespace std;

int num{300};

void local_example(int x){
    int num{1000};
    cout<<"\nThe num in function starting is: "<<num<<endl;
    num = x;
    cout<<"The num in function ending is: "<<num<<endl;
}

void global_example(){
    cout<<"\nGlobal num is "<<num<<" in global_example - start"<<endl;
    num*=2;
    cout<<"Global num is "<<num<<" in global_example - end"<<endl;
}

void static_local_example(){
    static int num {5000};
    cout<<"\nLocal static num is "<<num<<" in static_local_example- start"<<endl;
    num+=1000;
    cout<<"Local static num is "<<num<<" in static_local_example- end"<<endl;
}

int main(){
    int num{100};
    int num1{200};

    cout<<"Local num in main is: "<<num<<endl;
    {
        int num{500};
        cout<<"The inner num is: "<<num<<endl;
        cout<<"The function can see that outer num1 in main is: "<<num1<<endl;

    }
    cout<<"Local num in main is: "<<num<<endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();

    return 0;
}