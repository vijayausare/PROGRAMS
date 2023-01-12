
#include<iostream>
#include<string>
using namespace std;

void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){
	v();
string s;
cin>>s;
int l;

for( l=0;l<(s.length());l++){
//	if(s[l]!=s[l+1])continue;
	if(s[l]==s[l+1]){
		s.erase(l,2);
		l=-1;    

	}
	  
}
cout<<(s.size()?s:"Empty String");
	return 0;
}