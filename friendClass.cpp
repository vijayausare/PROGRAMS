/*	this frien class is used to access any method or any
	property ofany classs which has some privet methods
	and properties ...without inheritace we can use this properties
*/
#include<iostream>
#include<string>

using namespace std;

class Employee{
private:
	string phoneNo;

public:
	string name;

	void setphoneNo(string phN){

		this->phoneNo=phN;

	}

	friend class Car;


};

class Car{
public:
	void DisplayNo(Employee emp){
		cout<<emp.name<<endl<<emp.phoneNo;
	}
};

int main(){
	Employee ep;
	ep.setphoneNo("1020302102");
	ep.name="vijay s ausare";

	Car cr;
	cr.DisplayNo(ep);

	return 0;}
