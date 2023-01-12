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

	void displayDetails();
};

void Emp::displayDetails(){
	cout<<"price  :"<<	price<<endl<<"comapany name and itemname  :"<<itemncompanyName()<<endl;
}

int main(){
	Emp e(100,"Vijay ","Siemens");
	e.displayDetails();

	return 0;
}
