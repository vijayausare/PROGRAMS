
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


int32_t main(){
	
	go;
	int t=1;
	while(t--){
	
	int a , b; 
	cin>>a>>b; 
	cout<<"a is "<<a<<endl <<"b is "<<b <<endl;

	a = a+b ; // 34

	 b = a-b ;////34-2=32 

	 a = a-b; 

	 cout << "After Swapping: a =" << a << ", b=" << b; 





	}
	return 0;
}
