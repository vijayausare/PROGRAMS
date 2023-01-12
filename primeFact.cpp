
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


void primeFact(int n ){

for(int i=2;i*i<=n;i++){

	if(n%i==0){

		while(n%i==0){

			cout<<i<<" ";
			n=n/i;
		}
	}
}if(n>1)cout<<n;

}



int main(){
	
	fre;sync;
	int t;
	cin>>t;
	primeFact(t);



	return 0;
}