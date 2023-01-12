/* this is example of runtime polymorphism

THIS IS CALLED AS FUNCTION OVERRIDING...............

*/
#include<iostream>

using namespace std;

class Animal{
	public:
		void sound(){
			cout<<"Sound";
		}

		void sleep(){
			cout<<"Sleep";
		}

};

class Dog : public Animal{
public:
	void sound(){
		cout<<"Dog Sound";
	}

	void sleep(){
		cout<<"Dog sleep ";
	}
};

int main(){

Animal ani;
ani.sound();
ani.sleep();

Dog dg;
dg.sound();
dg.sleep();

return 0;

}
