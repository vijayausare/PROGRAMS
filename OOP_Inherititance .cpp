#include <iostream>

using namespace std;

class Account{
	int id ; 
public:
	int salary ; 

	void setSalary(int salary){
		this->salary= salary;
	}
	void setId(int id){
		this->id= id;
	}
	void showId(){
		cout<<id<<endl ; 
	}

};
class Programmer:public Account{  // Public meaning we are inheriting members of cbase class as public to to inhgeritatred clasas 
								/// we cant access the private members of parent class 

public:
	int bonus ; 

	void setBonus(int bonus){this->bonus= bonus;}

	void show(){
		cout<<"salary : "<<salary<<", Bonus : "<<bonus<<", Total= "<<salary+bonus<<"Rs" <<endl ; 
	} 
}; 



class Animal{
public:
	void eat(){cout<<"Eatting"<<endl ; }
	void walk(){cout<<"Walking"<<endl ; }
};

class Dog:public Animal{
	void bark(){cout<<"barking"<<endl ; }
}; 

class Small_dog:public Dog {
	void dancing(){cout<<"dancing"<<endl ; }
};


int main()

{

#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif

sam
	
Programmer p1; 
p1.setSalary(10000); 
p1.setBonus(1000); 
p1.show(); 

Account a1; 
a1.setId(123); 
a1.showId();

Programmer a2;
a2.setId(13); 
a2.showId(); 

	return 0;
}
