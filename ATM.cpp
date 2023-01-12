#include<iostream>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main(){
    fre;
    int withdral;
    float balance ;
    cin>>withdral;
    cin>>balance;
    
    if((withdral%5==0) && (withdral<=balance-0.50)){
        
        cout<<balance-withdral-0.50;
        
    }else{
        cout<<balance;
    }
    return 0;
    
}