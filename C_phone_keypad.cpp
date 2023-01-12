#include<iostream>

using namespace std; 

char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate_names(char * in , char * out , int i , int j ){ 

//base case 
if(in[i]=='\0'){
out[j]='\0';
cout<<out<<endl;
}

//recursive case 
int digit = in[i]-'0'; 
if(digit == 1 or digit == 0)
	generate_names(in , out , i+1, j );

for(int k =0 ; keypad[digit][k]!='\0'; k++) {
	out[j]= keypad[digit][k]; 

	generate_names(in , out , i+1, j+1); 
}



}

int main(){ 
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("o.txt", "w", stdout);
	 #endif
char in[100]; 
cin>>in; 
char out[100]; 

generate_names(in , out , 0 , 0 );
return  0;
}