#include<iostream>

using namespace std ; 

class p {
	public:
	void print(){cout<<"inside the parent class"<<endl;}
};
class c : public p {
public:
	void print(){cout<<"inside the child class"<<endl;}

};

int main(){ 
	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

p a ;
c b = c(); 
a.print(); 
b.print();

return 0 ; }