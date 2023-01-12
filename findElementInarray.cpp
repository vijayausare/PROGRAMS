
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
  		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


int32_t main(){
	
	go;

	int n ,m, find ;// n row and  m col 
	cin>>n>>m>>find;

	int a[n][m];

	for(int i=0;i<n;i++)
		for(int j =0;j<m;j++)
			cin>>a[i][j];

	int i =0,j=m-1;int c;int cnt=0;
	int xx =n+m;
	while(xx--){
		c=a[i][j];//cout<<c;
		if(c==find){cout<<"find";break;}
		else if(c<find)i++;
		else if(c>find)j--;
		cnt++;
	}
	cout<<cnt;
	return 0;
}