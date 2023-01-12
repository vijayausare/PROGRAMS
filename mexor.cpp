
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
		int x; 
		cin>>x; 

		if(x==0)cout<<1<<endl;
		else if(x==1)cout<<2<<endl ;
		else if(x==2)cout<<2<<endl;
		else {

			int ans =1; 

			while(ans*2<=x)ans = ans*2;

			if(ans ==x )cout<<x<<endl; 
			else if (x==(2*ans -1))cout<<x+1<<endl;
			else cout<<ans<<endl;	
		}

	}
	return 0;
}
