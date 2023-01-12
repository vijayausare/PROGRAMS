
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
#include<math.h>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
	//fre;sync;
	int t=1;
	cin>>t;
	while(t--){

		int n ;
		 cin>>n;

		 if((int)sqrt(n/2.0)==sqrt(n/2.0) || (int)sqrt(n/4.0)==sqrt(n/4.0)){cout<<"YES\n";}
		 else cout<<"NO\n";
		
	}



	return 0;
}