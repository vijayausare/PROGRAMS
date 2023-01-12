
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

int q;
cin>>q;
	int n,k, incr=0,decr=0;

while(q--){

	cin>>n>>k;
	int arr[n],arr1[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
		arr1[i]=arr[i];

	}
	for(int j=0 ; j<n;j++){

		arr[j]=arr[j]+k;
		arr1[j]=arr1[j]-k;
	}
	
	for(int i=0 ;i<n;i++){

		incr=arr[i]-incr;
		decr=arr1[i]-decr ;
		//cout<<arr[i]<<" ";
	}

	if(abs(incr)>abs(decr)) cout<<abs(incr)<<" ";
	else cout<<abs(decr)<<" ";

}



	return 0;
}
