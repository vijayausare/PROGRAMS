
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

bool cmp(string a, string b){

	if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
  
        return a.size() > b.size();
    else
        return a < b;
}

int32_t main(){
	
	go;
	int n ; 
	cin>>n;

	string s[n];

	for(int i =0;i<n;i++)cin>>s[i];

	sort(s,s+n,cmp);
	for(int i = 0 ;i<n;i++)cout<<s[i]<<endl;


	return 0;
}
