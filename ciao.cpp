
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

		int D, d, p ,q; 
		cin>>D>>d>>p>>q;
		int noT=D/d;

		int sum =0;
		if(noT%2==0){
			sum=d*noT/2 *(2*p+(noT-1)*q);
			sum+=(D%d)*(p+noT*q);
			cout<<sum<<endl;
		}
		else{
			sum=d*(noT*(p+(noT-1)*q));
			sum+=(D%d)*(p+noT*q);cout<<sum<<endl;
			
		}
		}
	
	
	return 0;
}