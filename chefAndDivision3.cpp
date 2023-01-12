
//#include<iostream>
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
	int t=1;
	cin>>t;

		
//int i=0;
	while(t--){
		int n=0,k=0,sum=0,i,xx=0;
		lld d =0;

		cin>>n>>k>>d;
		int A[n];
		for(int x=0;x<n;x++){
			cin>>A[x];
			sum+=A[x];
		}
		if(sum>=(k*d)){
			cout<<d<<"\n";
		}else{
			cout<<(sum/k)<<"\n";
		}
	}

		
	return 0;
}