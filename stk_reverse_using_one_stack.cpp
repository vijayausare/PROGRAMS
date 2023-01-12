#include<iostream>
#include<stack>
#include<vector>
using namespace std ; 

void transfer(stack<int>&s1 , stack<int>&s2, int n ){

	for(int i = 0; i< n ;i++){
		s2.push(s1.top());
		s1.pop();
	}
}

void reverseStack(stack<int>&s1){

	//helper stack 
	stack<int>s2; 

	int n = s1.size(); 

	for(int i =0 ; i < n ; i++){

		//pick the element from top and inseert it at the bottom 

		int x = s1.top(); 
		s1.pop(); 

		//transfer n-i-1 elements from stack s1 to s2 

		transfer(s1 ,s2 , n-i-1); 

		//insert element xin s1 
		s1.push(x); 

		//trasfer elements from s2 to s1 

		transfer(s2, s1 , n-i-1); 

	}
}


int main(){
	 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

	stack<int >s; 

	for(int i = 0 ; i<5; i++){s.push(i);}
	//cout<<s.size();

	while(!s.empty()){
		cout<<s.top()<<endl ; 
		s.pop();
	}
	cout<<endl ; 


	for(int i = 0 ; i<5; i++){s.push(i);}


reverseStack(s); 
	while(!s.empty()){
		cout<<s.top()<<endl ; 
		s.pop();
	}
	cout<<endl ; 


	return 0 ;}