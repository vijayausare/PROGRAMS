#include<iostream>
#include<bits/stdc++.h>

#include<cstring>
using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	string s;
	getline(cin,s);

	int ch[26]={0};

	for(int i =0;i<s.length();i++){

		ch[s[i]-'a']++;

		}
		int m=0, idx;
	for(int  i =0;i<26;i++){

		if(ch[i]>m){m=ch[i];idx=i;}

	}
	
	cout<<(char)(idx+'a');

	return 0 ;}