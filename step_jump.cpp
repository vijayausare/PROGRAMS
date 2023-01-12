
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

int findstep(int n , int k ){
	
	 if(n==0)return 1 ; 
	 if(n<0 )return 0 ; 
	 int ans = 0 ; 
	 for(int i =  1; i<k ;i++)ans+=findstep(n-i, k);
	 	return ans; 
}

int32_t main(){
	
	go;
	int t=1;
	while(t--){


		int n , k ; 
		cin>>n>> k;
	cout<<findstep(n,k); 

	}
	return 0;
}
