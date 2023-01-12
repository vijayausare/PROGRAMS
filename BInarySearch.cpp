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

int binary_search(int a[],int n, int key){

	int s=0;  //s=start l=last
	int l=n-1;

	while(s<=l){

		int mid =(l+s)/2;

		if(a[mid]==key)return mid;
		else if(a[mid]<key)s=mid+1;
		//else if(a[mid]>key)l=mid-1;
		else l=mid-1;
	}return 0;


}


int main(void){
  
  fre;sync;
  int a[100];
  int n;cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  int key;
  cin>>key;
 if(binary_search(a,n,key)) cout<<binary_search(a,n,key);
 else cout<<"Not found";
return 0;
}


