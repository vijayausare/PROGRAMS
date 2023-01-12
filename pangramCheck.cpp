
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define rep(i,start,lim) for(lld i=start;i<lim;i++)
#define repd(i,start,lim) for(lld i=start;i>=lim;i--)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
fre;sync;
string a="abcdefghijklmnopqrstuvwxyz";
string A="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s;
	getline(cin,s);
	int count =0;
	//int up =0;
	int len =s.length();
	transform(s.begin(), s.end(), s.begin(), ::toupper); 
  	sort(s.begin(), s.end());
	cout<<s;
	 for (int i = 0; i < s.length(); i++) { 
  
        if(s[i]!=s[i+1])
        	count++;

      }
    if(count==27) cout<<"pangram"; ///27 because it contains space char also 
	else cout<<"not pangram";
	return 0;
}