#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>
//#include<algorithm>   
//#include<stack>    
//#include<climits>   
using namespace std;

#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

void insertion_sort(int a[],int n){

	for(int i =1;i<=n-1;i++){

		int e=a[i];
		int j=i-1;

		while(j>=0 and e<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;


	}
}



int main(void){
  
  
  fre;sync;
  int a[100];
  int n;cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  insertion_sort(a,n);
  for(int i =0;i<n;i++)cout<<a[i]<< " ";
  return 0;
}


