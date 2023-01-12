
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,

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
	while(t--){
		int n,k;
		cin>>n>>k;
		int max=INT_MIN;
		int min =INT_MAX;
		int a[n];
		for(int i =0;i<n;i++){
			cin>>a[i];
			if(a[i]>max )max =a[i];
			
			
		}
		
		// for(int i =0;i<n;i++){
		// 	if(a[i]>1){a[i]=a[i]-1;
		// 		break;

		// 	}
		// }
		
		// for(int i =0;i<n;i++){
		// 	if(a[i]==max){a[i]=a[i]+1;
		// 		break;

		// 	}
		// }
		int i =0;
		while(a[i]>0){

			if(a[j]>1)
		}
		


		for(int i =0;i<n;i++)cout<<a[i]<<" ";


		}








	return 0;
}