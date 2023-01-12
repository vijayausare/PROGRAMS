#include<iostream>

using namespace std ; 

void generate_subsequence(char *in , char *out, int i , int j ){
	 

	 //base case 

	  if(in[i]=='\0'){ 
	  	out[j]='\0'; 
	  	cout<<out<<endl ; 

	  	return ;

	  }

	  //recursive case  
	  out[j]=in[i];

	  //  includes the currect char 
	  generate_subsequence(in , out , i+1, j+1);

	  //do not include the current char
	  generate_subsequence(in , out , i+1, j ); 
	  			



}

int main(){ 

ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("o.txt", "w", stdout);
	 #endif

char input[] = "abc"; 
char output[10]; 

generate_subsequence(input , output , 0 , 0 ); 


return 0 ;}