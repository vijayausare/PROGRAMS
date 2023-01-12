
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
    	freopen("o.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


int32_t main(){
	
	go;
	int t=1;
	cin>>t;
	while(t--){
		
		int n ; 
		cin>>n  ; 

		if(n==1){cout<<1<<endl;continue;}

		int ans = 1; 
		while(ans*2<=n){

			ans = ans *2;
		}
		int x= n-ans+1; 

		if(n==ans)cout<<ans/2<<endl; 
		else cout<<max(x, ans/2)<<endl ; 

	}
	return 0;
}
