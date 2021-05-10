#include <iostream>
#include <vector>

using namespace std;
// void print_array(const int numbers[],size_t);
// void set_array(int numbers[],size_t,int);


// void print_array(const int numbers[],size_t array_size){
//     for(size_t i{0};i<array_size;i++){
//         cout<<numbers[i]<<endl;
//     }
//     cout<<endl;
//     numbers[0]=5000;
// }

// void set_array(int numbers [],size_t array_size,int set_to){
//     for(size_t i{0};i<array_size;i++){
//         numbers[i]=set_to;
//     }
//     cout<<endl;    
// }

// int main(){
// int my_scores [] {99,93,100,76,84};

// print_array(my_scores,5);
// set_array(my_scores,5,100);
// print_array(my_scores,5);
// print_array(my_scores,5);


// cout<<endl;

// }
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector <string> &v);
void print_vector(vector <string> &v);


void pass_by_ref1(int &num){
    num=1000;
}

void pass_by_ref2(string &s){
    s="Changed";
}

void pass_by_ref3(const vector <string> &v){
    v.clear();
}

void print_value(const vector <string> &v){
    for(auto s:v){
        cout<<s+" ";
    }
    cout<<endl;
}

int main(){
    int num{10};
    int another_num{20};

    cout<<"Value of num before calling pass_by_ref1 "<<num<<endl;
    pass_by_ref1(num);
    cout<<"Value after calling pass_by_ref1 "<<num<<endl;

    cout<<"another num before calling pass_by_ref1 "<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"another num after callin pass_by_ref1 "<<another_num<<endl;

    string name{"Frank"};
    cout<<"name before calling pass_by_ref2 "<<name<<endl;
    pass_by_ref2(name);
    cout<<"name after calling pass_by_ref2 "<<name<<endl;

    vector <string> three_stooges {"Larry","Moe","Curly"};
    cout<<"three_stooges before calling pass_by_ref3: "<<endl;
    print_value(three_stooges);
    pass_by_ref3(three_stooges);
    cout<<"three_stooges after calling pass_by_ref3 "<<endl;
    print_value(three_stooges);

    cout<<endl;



return 0;
}


















