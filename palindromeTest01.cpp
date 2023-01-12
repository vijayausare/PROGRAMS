#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>
//#include<algorithm>
//#include<stack>
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
  
 //fre;
  sync;
  lld t=1;
  cin>>t;
  while(t--){

  	string s,ans;
  	cin>>s;int flag=0;
  	for(int i=0;i<s.length();i++){
  		 s.insert(i,"a");
  		 lld len =s.length();
  		 for(int j =0;j<len/2;j++){
  		 	 if (s.at(j) != s.at(len-j-1)) 
  		 	 {
  		 	// cout<<s<<" ";
  		 	 flag=1;
  		 	 ans=s;
  		 	 break;
  		 	 }
  		 } 
 s.erase(s.begin() + i);
  }

  if(flag){cout<<"YES\n"<<ans<<"\n";}
  else {cout<<"NO\n";}
}


return 0;
}


