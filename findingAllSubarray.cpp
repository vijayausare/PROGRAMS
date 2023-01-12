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
  int a[1000];
  int n;cin>>n;

  for(int i =0; i< n;i++)cin>>a[i];

  for(int i =0;i<n;i++){

  	for(int j=i;j<n;j++){

  		for(int k =i;k<=j;k++)cout<<a[k]<<" ";
	       cout<<"\n";
  	}
     
}cout<<"\n";


return 0;
}


