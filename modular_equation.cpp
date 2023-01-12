
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


int32_t main(){
	
	go;

	int t=1;
	cin>>t;
	while(t--){

		int n ,m ,k,cnt=0;
		cin>>n>>m;
		int a[n+1];

		for(int i =0;i<n+1;i++)a[i]=1;

		for(int i =2;i<n+1;i++){

			k=m%i;
			cnt+=a[k];

			for(int j =k;j<n+1;j+=i)a[j]++;

		}
	cout<<cnt<<endl;
		
	}



	return 0;
}