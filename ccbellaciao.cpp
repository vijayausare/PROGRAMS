
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
#include<algorithm>       // sort ,
#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
using namespace std;
#define int long long int
#define go f()
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl '\n'

void f(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


int32_t main(){
	
	go;
	int t;
	cin>>t;
	int  u =10e9+7;
	cout<<u;19514
	
	while(t--){

		int D, d, p,q,ans=0;

		cin>>D>>d>>p>>q;

		int n=D/d;

		ans =d*(p*n +q*((n-1)*(n)/2));

		if(D%d!=0)ans+=(D%d)*(p+ n*q);

		cout<<ans<<endl;

	}
	
	
	return 0;
}
