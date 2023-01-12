

#include<iostream>
//#include<bits/stdc++.h>
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
lld n,count=0;
cin>>n;
string s[n];
for(int i=0;i<n;i++){
	cin>>s[i];
}
string ss=s[0];
for(int i=0;i<n;i++){

	for(int j=1;j<=n;j++){
		string next =s[j];
		if(ss[i]==next[j-1]){
			count++;//cout<<ss[i];
		}

	}
}
cout<<count;
	return 0;
}