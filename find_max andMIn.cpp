#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>
//#include<algorithm>
//#include<stack>
#include<climits>
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
  int arr[100];
  int n;cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  	int l= INT_MIN;
  	int s= INT_MAX;

  for(int i=0;i<n;i++){

  	//if(arr[i]>l)l=arr[i];
  	//if(arr[i]<s)s=arr[i];
  	l=max(l,arr[i]);
  	s=min(s,arr[i]);
  	//both the approach work 
  	

  }
  cout<<"smallest: "<<s<<"\n"<<"largest : " <<l<<endl;
  //cout<<INT_MAX<<INT_MIN;
return 0;
}


