
#include<iostream>
//b#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

void power(lld base ,lld pow){

	lld res=1;

	while(pow){

		if(pow%2){
			res=res*base;
			pow--;
		}else{

			base =base*base;
			pow=pow/2;


		}
	}cout<<res;
}

int main(){
	
	fre;sync;
	lld base ,pow;
	cin>>base ;cin>>pow;
	power(base ,pow );

	return 0;
}