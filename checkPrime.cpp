
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
	 void isPrime(int);
	fre;sync;
	int t=1;
	cin>>t;
	isPrime(t);

	return 0;
}
void isPrime(int n){
 int flag=0;
	for(int i =2;i*i<=n;i++){

		if(n%i==0)flag=1;
	}
	if(flag)cout<<"Non prime";
	else cout<<"prime";
}