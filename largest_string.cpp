
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
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

int main(){
	
	fre;sync;
	char a[1000],largestStr[1000];
	int len =0,largestLen =0 ;

	int n ;
	cin>>n;
	cin.get();

	for(int i=0;i<n;i++){

		cin.getline(a,1000);
		len =strlen(a);
		if(len>largestLen){
			strcpy(largestStr,a);
			largestLen=len;
		}
	}


cout<<"largest stirng is :"<< largestStr<<" and has length :"<< largestLen;

	return 0;
}