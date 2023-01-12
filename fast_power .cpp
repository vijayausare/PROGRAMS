
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

int powerOptimised(int a, int n){
 	int ans= 1;
	while(n>0){

		int last_bit= (n&1);
		if(last_bit){
			ans = ans *a;
		}
		a= a*a;
		n= n>>1;
	}
	return ans ;
}
int32_t main(){
	
	go;
	int a , n ; 
	cin>>a>>n ;
	cout<<powerOptimised(a,n);

	return 0;
}
