 #include<iostream>
#include<string>

using namespace std;

int ids={};

class Emp{

public:
	int id;
	string fn;
	string ln;

	string getFullName(){

		return fn+""+ln;
	}

	Emp(){
		cout<<"This is constructor"  // constructor has always name of class
	}

	void displayDetails();

};

void Emp::displayDetails(){

	cout<<"id  :"<<id<<endl<<"name   :"<<getFullName()<<"\n\n";
}

int main(){
	Emp e;
	e.id=10;
	e.fn="vijay ";
	e.ln="ausare";
	
	cout<<"Enter employee's ID "<<endl;

	cin>>e.id;
	//ids.append(e.id);
	cout<<"Enter first and last name"<<endl;
	cin>>e.fn;
	cin>>e.ln;
	

	e.displayDetails();
	cout<<ids;
	return 0;

}
