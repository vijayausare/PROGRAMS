#include<bits/stdc++.h>

using namespace std ; 


class Car{


	float price; 

public:
	int model_no ; 
	char *name ; 


	Car(){

		name= NULL; 
	}

// copy constructor here 

	Car(Car &x){
		price = x.price  ; 
		model_no= x.model_no; 

		name = new char[strlen(x.name)+1];
		strcpy(name , x.name); 
	}

	Car(float p , int m , char *n){
		price = p ; 
		model_no= m ; 

		name = new char[strlen(n)+1]; 
		strcpy(name,n ); 

	}

	void print(){

		cout<<"Name :"<<name<<endl; 
		cout<<"model_no :"<<model_no<<endl ;
		cout<<"Price :"<<price <<endl ;
		cout<<endl ;  
	}
};





int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

Car c(100,110,"ABC"); 
Car d(c);
 d.name[0]='D';
c.print(); 
d.print(); 
	
	return 0 ; 
}