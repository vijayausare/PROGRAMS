
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

// void primefact(int n){

// while(n % 2 ==0){

// 	cout<<2<<" ";
// 	n= n/2;
// }

// for(int i=3;i*i<=n;i++){

// 	while(n % i ==0){
// 		cout<<i<<" ";
// 		n/=i;
// 	}
// }

// }

int ar[1000001];
#define maxN=1000000;

void sieve(){
	ar[1]=1;
	for(int i=2;i<=maxN;i++) ar[i]=i;
	for(int i =4;i<maxN;i+=2;) ar[i]=2;

	for(int i=3;i*i<=maxN;i++){

		if(ar[i]==i){

			for(int j=i*i;j<maxN;j+=i){

				if(ar[j]==j)ar[j]===i;
			}
		}
	}
}


int main(){
	
	fre;sync;
	int N=100;//cin>>n;

	primefact(N);



	return 0;
}