
#include<bits/stdc++.h>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	string s ;
	cin>>s;
	int i ;

	for( i =1;i<s.length();i++){
		cout<<s[i-1]<<s[i]-s[i-1];
	}cout<<s[s.length()-1];

	return 0 ;}