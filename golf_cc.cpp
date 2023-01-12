
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
using namespace std;
#define int long long int
#define go f()
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl '\n'

void f(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/

int binarySearch(int a[],int n, int key){

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
int32_t main(){
	
	go;


	int t=1;
	cin>>t;
	while(t--){
	    int n,k,x;
	cin>>n>>x>>k;
	
	if(x%k==0)cout<<"YES\n";
	else if(x%k==(n+1)%k)cout<<"YES\n";
	else cout<<"NO\n";
	
	    
	    
	}
	return 0;


	return 0;
}