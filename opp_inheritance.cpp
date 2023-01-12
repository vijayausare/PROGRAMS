#include<iostream>

using namespace std; 

class parent {

	public:
		int id_d ;
};

class child : public parent{

public:
	int id_c; 
};

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	
	parent a ; 
	child b; 

	b.id_d = 10 ; 

	cout<<b.id_d; 
	return 0 ; }