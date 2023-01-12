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
  
  int a[1000],cumSum[1000]={0};
  int n ;cin>>n;
  int sum =0,left=-1,right=-1,max=0;
  cin>>a[0];
  cumSum[0]=a[0];
  for(int i =1;i<n;i++){

  	cin>>a[i];
  	cumSum[i]=cumSum[i-1]+a[i];

 }

  /*
		__________________NON OPTIMIZED CODE ____________

  for(int i =0;i<n;i++){

  	for(int j=i;j<n;j++){
  		sum=0;
  		for(int k =0;k<=j;k++){

  			sum+=a[k];

  		}
  		if(sum>max){
  			max=sum;
  			left=i;right=j;
  		}
  	}
  }
  
  */

                 //_________________little bit  optimised code _______________

 /*

 for(int i =0;i<n;i++){

 	for(int j =i;j<n;j++){

 		sum =0;

 		sum =cumSum[j]-cumSum[i-1];
 		if(sum>max){
 			max = sum;
 			left=i;
 			right=j;
 		}

 	}
 }

 

*/
    ////////////////////optimised approach //////////// 

/*
int cs =0,ms=0;
 for(int i=0  ;i<n;i++){
 	cs =cs+a[i];
 	if(cs<0)cs=0;
 	if(cs>ms){ms=cs;}
 }

*/

 	cout<<"max sum is :"<<ms<<" \nfrom index "<<left<<" to " <<right<<endl;
  cout<<"subarray is :";
  for(int i=left;i<=right;i++) cout<<a[i]<<" " ;cout<<endl;
return 0;
}


;