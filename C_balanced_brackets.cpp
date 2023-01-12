#include<iostream>
using namespace std; 


void generate_brackets(char *out, int n , int idx ,int openB, int closeB){ 

//base case 

if(idx==2*n){ 
	out[idx]='\0'; 
	cout<<out<<endl ; 
	return ; 
}

//recursive case 

if(openB <n){ 
	out[idx]='('; 
	generate_brackets(out ,n , idx+1, openB+1, closeB); 
}
if(closeB < openB){ 
	out[idx]= ')'; 
	generate_brackets(out , n , idx+1, openB, closeB+1); 

}

}
int main(){
	
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("o.txt", "w", stdout);
	 #endif


	int n ; 
	cin>>n; 

	char out[1000]; 
	int idx = 0 ; 

	generate_brackets(out, n , idx ,0,0); 

}