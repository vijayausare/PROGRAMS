
#include<bits/stdc++.h>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	string s;
	getline(cin,s);
	
	string a; 

	for(int i =0;i<s.length();i++){

		a.push_back(s[i]);

		if(i==s.length()-1)cout<<a<<endl;
		else {

			if(s[i+1]>='A' and s[i+1]<='Z'){
				cout<<a<<endl;
				a.clear();
			}
		}
	}


	return 0 ;}