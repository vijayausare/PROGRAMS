//finding  missing char to make sentence  panagram 

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

#define MAX 26

int main(){
	
fre;sync;

string missing="";

bool x[MAX]={false};
string s;
getline(cin,s);
transform(s.begin(),s.end(),s.begin(),::toupper);
//cout<<s;

for(int i=0;i<s.size();i++){

	if(s[i]<'z' && s[i]>'a'){
		x[s[i]-97]=true;         // insted of 97 we can use 'a'
	}
	 if(s[i]<'Z' && s[i]>'A'){
		x[s[i]-65]=true;
	}

}
for(int i=0;i<MAX;i++){

	if(x[i]==false){

		missing.pb(i+'a');
	}

}

cout<<missing;
	return 0;
}