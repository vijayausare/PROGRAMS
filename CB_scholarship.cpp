
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

bool isPossible(int n , int m , int x , int y , int mid){

	if(mid *x <= m+(n -mid ))return true;return false;
}

int32_t main(){
	
	go;
	int t;
	cin>>t;
	while(t--){

		int n , m , x, y ;
		cin>>n >>m>>x>>y;

		int s = 0 ;
		int e =n ;

		int ans  =INT_MIN ;

		while(s<=e){

			int mid = (s+e)>>1;

			if(isPossible(n , m , x , y , mid )){
				ans = max(ans , mid );
				s  =mid +1; 
			}
			else {
				e =mid - 1; 
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}
