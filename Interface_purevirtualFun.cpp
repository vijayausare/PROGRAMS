#include<iostream>
using namespace std;

class Animal{
public:
	virtual void sleep()=0;
	virtual void run()=0;
};

class Dog : public Animal{
public:

	void sleep(){
		cout<<"Dog sleeps";
	}
	void run(){
		cout<<"Dog can run";
	}

};

int main(){
	Animal *ani=new Dog();
	ani->sleep();
	ani->run();

return 0;}
