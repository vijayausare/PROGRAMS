
#include<iostream>

//#include<bits/stdc++.h>
//#include<cstring>         // string 
#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
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

void spiralPrintAntiClk(int a[][1000], int m , int n ){

	int scol =0, srow=m-1,ecol=n-1,erow=0;


	while(scol<=ecol and srow>=erow){

		// printing  first col

		for(int i =scol ;i<=srow;i++){
			cout<<a[i][scol]<<", ";
			
		}scol++;

		//printing last row

		for(int i =scol;i<=ecol;i++){
			cout<<a[srow][i]<<", ";

		}srow--;


		for(int i =srow;i>=erow;i--){
			cout<<a[i][ecol]<<", " ;
		}ecol--;

		for(int i =ecol;i>=scol;i--){
			cout<<a[erow][i]<<", ";
		}erow++;

	}
	cout<<"END";
}



int32_t main(){
	
	go;
	int t;
	int m ,n;
	cin>>m>>n;
	int a[1000][1000];
	for(int i =0;i<m;i++)
		for(int j =0;j<n;j++)cin>>a[i][j];

	spiralPrintAntiClk(a, m,n);
	
	return 0;
}
