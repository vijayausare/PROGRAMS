#include<iostream>
#include<cstring>
//#include<bits/stdc++.h>
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
  int t=1;
  cin>>t;
  while(t--){
  	int  k,n;
  	int c=0,max=0;
  	string s;
  	cin>>n>>k;
  	cin>>s;

  	for(int i=0;i<n;i++){

  		if(s[i]=='*'){
  			c++;
  		
  		if(c>=max)max=c;
  		
  	}else c=0;

  	}
  	cout<<max<<" ";
  	if(max>=k)YES ;
  	else NO;
  }
}


