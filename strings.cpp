#include <iostream>
#include <iomanip>
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
   char first_name[20];
   char last_name[20];
   char full_name[50];
   char temp[50];
   


cout<<"Please enter your first name:";
cin>>first_name;

cout<<"Please enter your last name:";
cin>>last_name;
cout<<"----------------------------------"<<endl;

cout<<"Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
cout<<"and your last name "<<last_name<<" has "<<strlen(last_name)<<" characters"<<endl;

strcpy(full_name,first_name);
strcat(full_name," ");
strcat(full_name,last_name);
cout<<"Your full name is "<<full_name<<endl;

cout<<"--------------------------"<<endl;
cout<<"Enter your full name: ";
cin>>full_name;

cout<<"Your full name is "<<full_name;

cout<<"Enter your full name: ";
cin.getline(full_name,50);
cout<<"Your full name is "<<full_name<<endl;

cout<<"-----------------------------------"<<endl;

strcpy(temp,full_name);
if(strcmp(temp,full_name)==0)
    cout<<temp<<" and "<<full_name<<" are the same"<<endl;
else
    cout<<temp<<" and "<<full_name<<" are different"<<endl;

cout<<"------------------------------------"<<endl;

for(size_t i{0};i<strlen(full_name);++i){
    if(isalpha(full_name[i])){
        full_name[i]=toupper(full_name[i]);
    }

}
cout<<"Your full name is "<<full_name<<endl;

cout<<"-----------------------------------"<<endl;

if(strcmp(temp,full_name)==0)
    cout<<temp<<"and"<<full_name<<" are both same";
else
    cout<<temp<<"and"<<full_name<<" are both different";

cout<<"\n-----------------------------------------"<<endl;

cout<<"The result of comparison between "<< temp <<"and"<<full_name<<"is :"<<strcmp(temp,full_name)<<endl;
cout<<"The result of comparison between "<< full_name <<"and"<<temp<<"is :"<<strcmp(full_name,temp)<<endl;

string s0;
string s1{"Apple"};
string s2{"Banana"};
string s3{"Kiwi"};
string s4{"apple"};
string s5{s1};           //Apple
string s6{s1,0,3};      //App
string s7(10,'X');      //XXXXXXXXXX

cout<<s0<<endl;         //NO garbage
cout<<s0.length()<<endl;//empty string

//Initialisation
cout<<"\nInitialisation"<<"\n..................................................."<<endl;
cout<<"s1 is initailised to:"<<s1<<endl;
cout<<"s2 is initailised to:"<<s2<<endl;
cout<<"s3 is initailised to:"<<s3<<endl;
cout<<"s4 is initailised to:"<<s4<<endl;
cout<<"s5 is initailised to:"<<s5<<endl;
cout<<"s6 is initailised to:"<<s6<<endl;
// cout<<"s7 is initailised to:"<<s7<<endl;

Comparison
cout<<"\n Comparison "<<"\n ........................................"<<endl;
cout<<boolalpha;
cout<<s1<<"=="<<s5<<": "<<(s1==s5)<<endl;
cout<<s1<<"=="<<s2<<": "<<(s1==s2)<<endl;
cout<<s1<<"!="<<s2<<": "<<(s1==s2)<<endl;
cout<<s1<<"<"<<s2<<": " <<(s1<s2)<<endl;
cout<<s2<<">"<<s1<<": " <<(s2>s1)<<endl;
cout<<s4<<"<"<<s5<<": " <<(s4<s5)<<endl;
cout<<s1<<"=="<<"Apple"<<": "<<(s1=="Apple")<<endl;

Assignment
cout<<"\nAssignment"<<"\n............................."<<endl;

s1="Watermelon";
cout<<"s1 is now: "<<s1<<endl;
s2=s1;
cout<<"s2 is now: "<<s2<<endl;

s2="Frank";
cout<<"s3 is now: "<<s3<<endl;

s3[0]='C';
cout<<"s3 change to first letter to 'C': "<<s3<<endl;
s3.at(0) = 'P';
cout<<"s3 change first letter to 'P':"<<s3<<endl;

Concatination
s3= "Watermelon";
cout<<"\nConcatination"<<"\n..................................."<<endl;

s3 = s5+" and "+s2+" juice";
cout<<"s3 is now: "<<s3<<endl;

for loop
 
s1="Apple";
for(size_t i{0};i<s1.length();++i)
    cout<<s1.at(i);
cout<<endl;

for(char c:s1)
    cout<<c<<endl;

//sub-string
cout<<"\nsub-string"<<"\n.................................................................."<<endl;

s1 = "This is a test";

cout<<s1.substr(0,4)<<endl;
cout<<s1.substr(5,2)<<endl;
cout<<s1.substr(10,4)<<endl;

Erase
cout<<"Erase"<<"\n........................................."<<endl;

s1="This is a test";
s1.erase(0,5);
cout<<"s1 now is: "<<s1<<endl;

getline

cout<<"getline"<<"\n.............................................."<<endl;

string full_name{};

cout<<"Enter your full name: ";
getline(cin,full_name);


cout<<"Your full name is: "<<full_name<<endl;

Find

cout<<"Find"<<"\n......................................................."<<endl;

s1="The secret word is Boo";

string word{};

cout<<"Enter the word to find: ";
cin>>word;

size_t position= s1.find(word);
if(position != string::npos){
    cout<<"Found "<<word<<" at position "<<position<<endl;
if(num==0){
    then
}
}
else{
    cout<<"Sorry "<<word<<" not found"<<endl;
}

// /* pyramind challenge
========================================================
*/

string str;
cin>>str;

for(size_t i{0}; i < str.length();++i)
{    

    
    unsigned int str_l = str.length();
    string space(str.length()-(i+1),' ');
    cout<<space;
    
    for(size_t j{0};j<=i;++j)
{
        cout<<str.at(j);
       
    }
    
    // for(size_t j{str.length()};j>0;--j)
    // {
    //     cout<<str.at(j);
    // }
    
cout<<endl;
}
return 0;

}