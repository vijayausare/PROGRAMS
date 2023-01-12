#include<iostream>
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
   lld t=1;
   cin>>t;
  while(t--){

  	float k1,k2,k3,v,result,ans,max=9.58;
  	cin>>k1>>k2>>k3>>v;
  	result=100/(k1*k2*k3*v);
  	ans=(int)(result*100+ 0.5);
  	//ans/=100;
  	cout<<ans<<" ";
  	if((ans/100) < max)YES;
  	else NO;





  }
  
return 0;
}
