#include<iostream>
#include<stack>
#include<vector>
using namespace std ; 

class Stack{

//private vector 
private:
vector<int> v;

public:
	void push(int data ){ 

		v.push_back(data); 
	}

	bool empty(){
		return v.size()==0 ;
	}
	void pop(){
		if(!empty()){
			v.pop_back();
		}
	}

	int top(){
		return v[v.size()-1];
	}
};


int main(){

 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

	Stack s ; 
	for(int i =0 ;i < 10; i++)s.push(i);

	while(!s.empty()){
		cout<<s.top()<<endl ; 
		s.pop();
	}
	cout<<endl ;
	
	stack<int>stl_stack ;

	for(int i =0 ;i < 10; i++)stl_stack.push(i);

	while(!stl_stack.empty()){
		cout<<stl_stack.top()<<endl ; 
		stl_stack.pop();
	}


	// cout<<"______________"<<endl ;

	// cout<<s.top();
	// s.pop();
	// cout<<s.top();
	return 0 ; 
}