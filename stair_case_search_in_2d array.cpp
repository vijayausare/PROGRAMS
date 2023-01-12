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

  int search ;cin>>search;

int i=0;
int j=m-1;
while(i>=0 and j>=0 and i<n and j<m){

if(a[i][j]==search){YES;return 0;}

if(a[i][j]<search) i++;
else j--;

}
NO;


return 0;
}


