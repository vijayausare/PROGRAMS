
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
	int n;
	cin>>n;

	bool a[n+1];
	memset(a,1,sizeof(a));

	for(int i =2;i*i<=n;i++){

		if(a[i]){

			for(int j=i*i;j<=n;j+=i){
				a[j]=0;
			}
		}
	}

	for(int i =2;i<=n;i++){
		if(a[i]){
			
			cout<<i<<" ";

		}
	}



	return 0;
}