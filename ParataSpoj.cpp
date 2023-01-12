
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

bool CancooK(int a[], int n , int min_mins, int parata){
	int cnt =0;
	for(int i =0;i<n;i++){
		int temp = a[i];
		int time = 0;
		int mul =1;
		
		while(1){

			time += mul* a[i];
			mul++;

			if(time > min_mins)break;

			cnt++;
		}		
	}
	if(cnt>=parata)return true; 
	else return false;
}

int32_t main(){
	
	go;
	int t;
	cin>>t;	
	while(t--){
		int parata ;
		cin>>parata;
		int c ;
		cin>>c;
		int cn[1000];
		for(int i =0 ;i<c;i++ )cin>>cn[i];

		int s = 0 ;
		int e = 100;

		int ans =INT_MAX ;

		while(s<=e){
			int mid  = (s+e)/2;
			if(CancooK(cn , c, mid, parata)){
				ans = min(ans , mid);
				e = mid - 1; 
			}else{
				s = mid +1;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}
