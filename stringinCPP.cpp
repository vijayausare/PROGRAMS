#include<iostream>
#include<string>

using namespace std;

void display(int ,string,float);

int main{

	int no;
	string name ;
	float fno;

	cout<<"Enter int no "<<"string"<<"float no";
	cin>>no;
	getline(cin,name );
	cin>>fno;

	void display(no,name,fno);

return 0;
}
void display(int n,string ns,float f){

	cout<<n<<ns<<f;

}