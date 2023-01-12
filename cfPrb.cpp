
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
#include<algorithm>       // sort ,
#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
using namespace std;
//#define int long long int
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
	
	//go;
	int t;
	cin>>t;
	while(t--){

		int n ;
		cin>>n;
		bool  neg=0,pos=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>0)pos =1;
			if(x<0)neg =1;
		}

		if(neg)cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			cout<<101<<endl;
			for(int i =0;i<101;i++){
				cout<<i<<" ";
			}cout<<endl;
		}
		
	}
	
	
	return 0;
}
