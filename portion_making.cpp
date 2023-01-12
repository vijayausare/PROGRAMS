
//#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
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
  		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


int32_t main(){
	
	go;

	int t=1;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		
		//cout<<k;

		int w=100-k;

		int d;
	    d = __gcd(k, w);
	 
	    k = k / d;
	    w = w / d;


	    cout<<k+w<<endl;
		
		
	}



	return 0;
}