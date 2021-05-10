#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> list_numbers {};
    char input {};
    int num{0};
    int sum {0};
    double mean{};
    int count{0};
    int smallest{};
    int largest{};

    do{
        cout<<"\nP- Print numbers"<<endl;
        cout<<"A- Add numbers"<<endl;
        cout<<"M- Display mean of the numbers"<<endl;
        cout<<"S- Display the smallest number"<<endl;
        cout<<"L- Display the largest number"<<endl;
        cout<<"Q- Quit"<<endl;
        cout<<"Enter your choice:";
        cin>>input;

        if(input=='p'||input=='P'){
            cout<<"[";

            for(auto val:list_numbers){
                
                cout<<val<<" ";
            }
            cout<<"]";
        }
        else if(input=='a'||input=='A'){
            cout<<"Enter the number you want to add to the list:";
            cin>>num;
            list_numbers.push_back(num);
        }
        else if(input=='m'||input=='M'){
            for(auto val:list_numbers){
                sum += val;
                count+=1;
                
            
                
            }mean = (double)sum/count;
                cout<<mean<<endl;        
        }
        else if(input=='s'||input=='S'){
            smallest= list_numbers.at(1);
            for(auto val:list_numbers){
                if(val<smallest)
                smallest = val;
                else
                continue;
            }
            cout<<smallest;
        }
        else if(input=='l'||input=='L'){
            largest = list_numbers.at(1);
            for(auto val:list_numbers){
                if(val>largest)
                largest=val;
                else
                continue;
            }
            cout<<largest;
        }
        else if(input=='q'||input=='Q'){
            cout<<"Goodluck!";
            break;
        }
        else{
            cout<<"Enter a valid choice...";
        }
        


        
    }while(input!='q'||input!='Q');
    
    return 0;
}