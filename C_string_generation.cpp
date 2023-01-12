#include<iostream>
using namespace std; 

void generate_strings(char *in , char * out , int i , int j ){ 

//base case 
if(in[i]=='\0'){ 
out[j]='\0';
cout<<out<<endl;
}

//rec case 
//one digit at time 
int digit = in[i]-'0';
char ch = digit+ 'A'-1 ; 
out[j]=ch ; 
generate_strings(in , out , i+1,j+1 ); 



// two digits at a time 

if(in[i+1]!='\0'){

	int secondDigit = in[i+1]-'0';
	int no = digit*10+secondDigit; 

	if(no<=26){ 
		ch = no+'A'-1; 
		out[j]= ch ; 
		generate_strings(in , out , i+2 , j+1);
	}
}
}


int main(){ 

ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("o.txt", "w", stdout);
	 #endif

 char a[100]; 
 cin>>a; 
 char out[100]; 
generate_strings(a , out , 0 , 0 );

return 0; 
}