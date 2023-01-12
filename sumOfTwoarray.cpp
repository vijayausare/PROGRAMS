
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
	int n ;
	int a[1000]={0},b[1000]={0},ans[1000];
	cin>>n;
	for(int i =n-1;i>=0;i--)cin>>a[i];
	
	int m ;
	cin>>m;
	for(int i =m-1;i>=0;i--)cin>>b[i];


	int maX=max(n,m);
	int carry =0;

	for(int i =maX;i>=0;i--){

		int sum =a[i]+b[i];
		ans[i]=(carry+sum)%10;
		carry = sum/10;cout<<carry<<endl;

	}
	for(int i =maX-1;i>=0;i--)cout<<ans[i]<<" ";
	
	
	return 0;
}
