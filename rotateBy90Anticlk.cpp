
#include<iostream>

//#include<bits/stdc++.h>
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
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/

void rotateBy90anticlk(int a[][1000], int n){

	for(int col =n-1;col>=0;col--){
		for(int row=0;row<n;row++){cout<<a[row][col]<<" ";}
		cout<<endl;}
}


int32_t main(){
	
	go;
	int n ;
	cin>>n;
	int a[1000][1000];
	for(int i =0;i<n;i++)
		for(int j =0;j<n;j++)cin>>a[i][j];
	
	rotateBy90anticlk(a,n);

	return 0;
}
