
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
#include<algorithm>       // sort ,
#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
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
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/

bool canPlaceCow(int s[], int n , int cow, int min_sep){

	int first_cow= s[0];
	int cnt =1;
	for(int i =0;i<n;i++){

		if(s[i]- first_cow>=min_sep){
			first_cow =s[i];
			cnt++;

			if(cnt==cow)return true;
		}
	}

	return false;
}

int32_t main(){
	
	go;
	int t;
	cin>>t;
	while(t--){
		int n ,cow;
		cin>>n>>cow;

		int stalls[10000];
		for(int i =0;i<n;i++)cin>>stalls[i];

		int s =0,e =stalls[n-1]- stalls[0];

		int  ans = 0;

		 while(s<=e){

		 	int mid = (s+e)/2;

		 	if(canPlaceCow(stalls, n , cow, mid)){

		 		ans = mid ;
		 		s = mid +1;
		 	}
		 	else {

		 		e = mid -1;
		 	}
		 }

		 cout<<ans<<endl;

	}
	
	
	return 0;
}
