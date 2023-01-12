 #include<iostream>
#include<string>

using namespace std;

class Emp{

public:
	int price;
	string itemName;
	string companyName;
	string itemncompanyName(){

    return itemName+" "+companyName;

	}

	Emp(int price,string itemName,string companyName){

		this->price=price;
		this->itemName=itemName;
		this->companyName=companyName;
	}

	~Emp();

	void displayDetails();
};

void Emp::displayDetails(){
	cout<<"price  :"<<	price<<endl<<"comapany name and itemname  :"<<itemncompanyName()<<endl;
}

Emp::~Emp(){
	cout<<"price is being Deleted "<<this->price<<endl;
}

int main(){
	Emp e1(100,"Vijay ","Siemens");
	e1.displayDetails();

	Emp e2=e1;
	e2.price=200000;
	e2.displayDetails();

	return 0;
}
