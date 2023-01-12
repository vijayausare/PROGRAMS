//////////////////////////incomplete///////////////////////////////////////
#include<iostream>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
fre;
sync;
int n;
cin>>n;
string str,ss;
cin>>str;
string letters="abcdefghijklmnopqrstuvwxyz";

//cout<<str ;

for(int i =0;i<n;i++){
	int count=0;

//sbcount=0;
	for(int j=0;j<n;j++){

		if(str[i]==str[j]) count++; break;
	}

	cout<<count<<str[i]<<" ";
	
	



}


cout<<ss;




	return 0;
}