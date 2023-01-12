#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
using namespace std;

#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(void){
  
  fre;sync;
  int n,m;cin>>n>>m;
  int a[n][m]={0};

  for(int i =0;i<n;i++)
  	for(int j =0;j<m;j++)cin>>a[i][j];


  for(int col =0;col<m;col++){

  	if(col%2==0)for(int row=0;row<=n-1;row++)cout<<a[row][col]<<" " ;
  	else {for(int row=n-1;row>=0;row--)cout<<a[row][col]<<" " ;}

  	//cout<<endl;
  } 




return 0;
}


