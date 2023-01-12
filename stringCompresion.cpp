
#include<bits/stdc++.h>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	string s ; cin>>s;
	int cnt =1;
	int ch[26];
	for(int i =0;i<s.length();i++){
		char x=s[i];
		if(x==s[i+1])cnt++;

		if(x!=s[i+1]){cout<<x<<cnt;cnt=1;}
	}



	return 0 ;}