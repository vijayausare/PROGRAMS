
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
long getSum(int a[], int n){
	long ans =0; 
	for(int i =0; i<n ;i++)ans+=a[i];
	return ans ;
}


bool isPossible(int a[], int n ,int k , int mid ){

	int sum =0 ;
	int time = 0;
	int painterNO = 1;

	for(int i =0 ;i<n;i++){

		if(time+a[i]> mid){

			painterNO++;
			time = a[i];
			if(painterNO>k)return false;
		}else{
			time+=a[i];
		}
	}
	return true;

}


int findPainter(int a[], int n , int nofp){

	int s = a[n-1];
	int e = getSum(a,n);

	int ans  = INT_MAX;

	while(s<=e){

		int mid = (s+e)/2;

		if(isPossible(a , n , nofp ,mid )){
			ans = min(ans , mid );
			e = mid -1;
		}else{
			s =mid +1;
		}
	}
	return ans ;

}

int32_t main(){
	
	go;
	int t ;cin>>t;
	
	while(t--){
			int k ;// number of painters
			cin>>k;
			int n ; // number of boards 

			cin>>n; 
			int brd[1000];// number of boards
			for(int i =0;i<n;i++)cin>>brd[i];

			cout<<findPainter(brd ,n , k )<<endl ;

	}

	return 0;
}
