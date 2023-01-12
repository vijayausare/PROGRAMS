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

void selection_sort(int a[],int n){

	for(int i =0;i<n-1;i++){   //here we are running loop till n-1 because we 
							  // know that last element is already sorted 


		int min_idx=i;

		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min_idx]) min_idx=j;


		}//after this loop we will swap the elements 

		swap(a[i],a[min_idx]);

	}  
	


}


int main(void){
  
  fre;sync;
  int a[100];
  int n;cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  selection_sort(a,n);
  for(int i =0;i<n;i++)cout<<a[i]<< " ";
  return 0;
}


