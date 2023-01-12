// this program check whether string has same chatr or not 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;



bool checkString(string str){


for(int i=0;i<str.size();i++){
	if(str[i]!=str[0]){	
		return false;}
}
return true;
}

int main(){
	
fre;sync;


string s;
cin>>s;
int x=checkString(s);
if(x)cout<<"same";
else cout<<"different ";






	return 0;
}