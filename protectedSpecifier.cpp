#include<iostream>

using namespace std;

class Person {

protected:
	string phoneNo;

public:
	string fullName;

	void setPhoneNo(string phn){
		this->phoneNo=phn;
	}

	void displayPersonDetails(){
		cout<<fullName<<endl<<phoneNo;
	}
};

class Student:public Person {

public:
	int id;

	void displayStudentDetails(){

		cout<<"id"<<id<<endl<<phoneNo;

	}


};
int main(){

	Person per;
	per.fullName="vijay shivaji ausare";
	per.setPhoneNo("7083968412");
	per.displayPersonDetails();

	Student stu;
	stu.id=100;
	stu.displayStudentDetails();


return 0;}