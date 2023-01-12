#include<iostream>
using namespace std;

int main(){
	int a,b;
	string z[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
	cin>>a>>b;

	for(int i=a;i<=b;i++){
		if(i>=1 && i<=9){
          cout<<z[i]<<endl;
		}else {
			if(i%2==0){
				cout<<"even"<<endl;
			}else{
				cout<<"odd"<<endl;
			}
		}

    }


return 0;}
