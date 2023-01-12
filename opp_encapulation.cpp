#include<iostream>
using namespace std ; 

class enc {

private:
	int  price ; 
public:
void set(int c ){price = c; }
int  get(){return price ; }
};


int main(){ 
 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

	enc e; 
	e.set(1000); 
	cout<<e.get();

return 0 ; }