#include <iostream>
using namespace std;

class Boys{

static int cnt; 
	int n; 
	string name ; 
	int age ; 


public:
	
	friend void showData(Boys); // can access private as well as public members of class  
	
	Boys(){
		// cout<<"This is Default Constructor"<<endl ; // execuites each time object is created  
		n = 0 ; 
		name = "" ; 
		age =0 ; 
	}
	Boys(int n , string name, int age){ // can directly pass the patermneter to the class and can make the object and set values as per requirement 

		this->n= n ; this->name = name; this->age = age ;
		// cout<<"This is paremeterised Constructor"<<endl ; 
	}

	Boys & setv(int n , string name , int age ){
		this->n = n ;       //using this pointer we can use the same var to store the values in th program 
		this->name= name; 
		this->age =age ;
		return *this ; 
		cnt++;  
	}

	void display(){ 
		cout<<n <<"-> Name :"<<name<<" , age : "<<age<<cnt<<endl ; 
	}

	// ~Boys(){	// works opposite to the constructor it can be executed once in class 
	// 	// cout<<"Destructor is envoked !"<<endl ; 
	// }

};

int Boys::cnt ; // by defult it is 0 if we want to start from specific number then we can do this as well 


struct Area{

int h; 
int w; 
void setHW(int h , int w ){
	this->h = h ; 
	this->w =w; 
}
void area(){
	cout<<"area is :"<<h*w<<endl; 
}

};


void showData(Boys b){
	b.name = "friend "; 
	b.age = 19 ; 
	cout <<"name of b :"<<b.name <<" , age of b is :"<<b.age <<endl; 
}



int main()

{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

cout<<"---------class----------"<<endl ; 

Boys r1, r2 , r3; // this is object of class 
r2.setv(1, "Omkar" ,200).display();cout<<"---->using this pointer "<<endl ; 
r1.setv(2, "sukre", 100); 
// cout<<r1.name ; cant access the private member of class 
r1.display();
r2.display();
r3= Boys(3, "Three", 198); 
r3.display(); 

cout<<"---------Structure----------"<<endl ; 
Area a ;  // it is instance of structure 
a.setHW(10, 10003);
a.area(); 

cout<<"---------Enum --------------"<<endl ; 


enum names {A , B , C , D , E , F , G}; // enum is data type which stores the fixed set of  const  
names day =  D; 
cout<<"Letter "<<day+1 <<endl ;

cout<<"---------Friend class----------"<<endl ; 
 Boys b ; 
showData(b); 

return 0;
}
