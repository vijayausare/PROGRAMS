#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
#include<algorithm>       // sort ,
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
  //int n ;
  int s=9;
  //cin>>n;
  int a[]={1,2,3,4,5,100,8,6};
  ///for(int i =0;i<n;i++)cin>>a[i];
  sort(a,a+8);
  int  i =a[0];

  int   j= (sizeof(a)/sizeof(int) )-1;


  while(i<j){

  	int c_sum= a[i]+a[j];
  	if(c_sum<s)i++;
  	else if(c_sum>s)j--;
  	else if(c_sum==s){cout<<a[i]<<" "<<a[j]<<"\n";i++;j--;}
  }



return 0;
}


