#include <iostream>

using namespace std;

struct Employee{

	int id; 
	string name ; 
	float salary ; 
};


int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
Employee emp; 
emp.id = 100; 
emp.name = 'vijay'; 
emp.salary= 1010.1 ;

printf("Name : %s\n, Id is %d , salary is : %f",emp.name , emp.id , emp.salary );

return 0;
}
