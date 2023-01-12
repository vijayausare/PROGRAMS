
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
#include<algorithm>       // sort ,
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


int32_t main(){
	
	go;
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++)cin>>a[i];
	int target ;
	cin>>target;
	sort(a,a+n);
	int  i=0,j=n-1;
	while(i<=j){
		int temp =a[i]+a[j];//cout<<temp<<" ";
		if(temp==target){
			cout<<a[i]<<" "<<"and "<<a[j]<<endl;
			i++;
			j--;
		}
		if(temp>target)j--;
		if(temp<target)i++;
	}
	// for(int i =0;i<n;i++){

	// 	for(int  j =i;j<n;j++){

	// 		if(a[i]+a[j]==target)cout<<a[i]<<" and "<<a[j]<<endl;
	// 	}
	// }

	return 0;
}