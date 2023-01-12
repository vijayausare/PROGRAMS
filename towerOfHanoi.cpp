
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
    	freopen("o.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


void move( int  n , char src, char helper , char desti ){

	 //base case 
	 if(n == 0 ) return; 

	 // recr case 

	 move( n-1 , src ,desti, helper ); 
	 cout<<"moved disc "<<n<<" from "<<src <<" to "<<desti<<endl; 
	 move(n-1, helper, src , desti);


}

int32_t main(){
	
	go;
	
	int n ;
	cin>>n ; 

	move(n,'A','B','C');

	return 0;
}
