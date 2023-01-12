
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

int main(){
	
	//fre;sync;
	int t=1;
	cin>>t;
	while(t--){

	 int n;cin>>n;
	 string a;
	 cin>>a;
	 int tt =0,mm=0;
	 bool flag =1;

	 for(int i =0;i<n;i++){
	 	//cout<<c;
	 	if(a[i]=='T'){tt++;}
	 	if(a[i]=='M'){mm++;}

	 	if(mm>tt or tt-mm>n/3){flag=0;break ;}

	 }
	 
	// cout<<tt-mm<<"  "<< endl;
	 if(flag and tt==mm*2){cout<<"YES\n";}
	 else {cout<<"NO\n";}

	 
		
	}



	return 0;
}