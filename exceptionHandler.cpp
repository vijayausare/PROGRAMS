#include<iostream>
using namespace std;

int main(){

	int a,b;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b\n";
	cin>>b;

	try{
		if(b==0){
			throw "0 divisional Error!!";

		}
		double result=a/b;
		cout<<"\n result :"<<result<<endl;

	}
	catch(const char *msg){
		cout<<msg<<endl;
	}

	cout<<"\n Programs Ends !!___>>>>";
}

