
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
	int n ,m ;
	cin>>n>>m;
	int a[300][300];
	for(int i=0;i<n;i++)
		for(int j =0;j<m;j++)cin>>a[i][j];

	int find ;
	cin>>find;
	int i =0,j=m-1;int flag=0;
	int x =m+n;
	while(x--){

		int temp =a[i][j];

		if(temp ==find){flag =1; break ;}
		if(temp < find)i++;
		if(temp > find)j--;

		if(flag)break;
	}
	if(flag)cout<<1;
	else cout<<0;




	return 0;
}
