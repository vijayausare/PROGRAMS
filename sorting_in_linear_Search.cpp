
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
#include<algorithm>       // sort ,
#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
using namespace std;
//#define int long long int
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

// we will be given one array which will contain only 0 1 and 2s
// we haveto linear sort this array 

int32_t main(){
	
	go;
	int n;

	cin>>n;

	int a[n];
	for(int i = 0;i<n;i++)cin>>a[i];

	int s =0,mid =0 ,l =n-1;
	
	while(mid<=l){

		switch(a[mid]){
			case 0:swap(a[s++], a[mid++]);break;
			case 1: mid ++;break;
			case 2: swap(a[l--], a[mid]);break;
		}
	}
	
	for(int i =0;i<n;i++)cout<<a[i];



	return 0;
}
