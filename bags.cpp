
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
	while(t--){
		int a , b , c ,d, e; 
		cin>>a>>b>>c>>d>>e;
		bool flag =0;
		if(a+b <= d and c<=e)flag =1 ;
		if(a+c <= d and b<=e)flag =1 ;
		if(c+b <= d and a<=e)flag =1 ; 

		if(flag)cout<<"yes"<<endl;
		else cout<<"no"<<endl ;


	}
	return 0;
}
