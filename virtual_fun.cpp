#include<iostream>

using namespace std;

class Animal{
public:
	virtual void sound(){
		cout<<"sound";

	}
	virtual void sleep(){
		cout<<"sleep";

	}


};

class Dog: public Animal{
public:
	void sound(){
		cout<<"Dog Sound";
	}

	void sleep(){
		cout<<" Dog Sleep";

	}

};

int main(){

	Animal *animal=new Dog();
	animal-> sound();
	animal-> sleep();

return 0;}