
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
#include<cmath>

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
		
		int flag =0;
		while(n--){

			int y; cin>>y;
			int  x=sqrt(y);

			if(x*x!=y)flag=1;
		}


	    if(!flag)cout<<"NO\n";
	    else cout<<"YES\n";		



	}



	return 0;
}