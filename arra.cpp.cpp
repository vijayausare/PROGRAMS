
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,

using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

bool isPerfectSquare(int x)
{
   
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
       
        return (sr * sr == x);
    }
  
    return false;
}



int main(){
	
	fre;sync;
	int t=1;
	cin>>t;
	while(t--){

		int n;cin >>n;
		int a[n];
		int mul=1;
		for(int i =0;i<n;i++){cin>>a[i]; mul=mul*a[i];}

	    if(isPerfectSquare(mul))cout<<"NO\n";
	    else cout<<"YES\n";		



	}



	return 0;
}