
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

int main(){
	
fre;sync;
string s;
getline(cin,s);

for(int i=0;i<s.size();i++){

if(ispunct(s[i])){

	s.erase(i--,1);
}

}


cout<<s;

	return 0;

}