#include<iostream>

using namespace std;

class Animal{
public:
	virtual void sound()=0;  // this is callled as the pure virtual function
	virtual void sleep(){
		cout<<"sleep";
	}

};

class Dog:public Animal{

	void sound(){

		cout<<"\nDog can sound \n"; ////this become mendatory to declare this funtion becaoude of this pure virtula fun

	}
};

int main(){
	 Animal *an=new Dog();
	 an->sound();
	 an->sleep();



	return 0;}
