/////////////////////////INCOMPLETE //////////////////////
#include<iostream>
#include<bits/stdc++.h>
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
int t=1;
int cnt=0;
string s;
cin>>s;
cin>>t;
int arr[t];
vector<int> v;

for(int i=0;i<t;i++){
	cin>>arr[i];
}

/*for(int i=0;i<t;i++){
	cout<<arr[i]<<" ";
}
cout<<s;
*/

for(int i=0;i<s.size();i++){
	int x=2;
	int temp = (int)s[i] -96;
	//cout<<temp<<" ";
	///if(s[i]==s[i+1]) continue ;
	v.pb(temp);
	if(s[i]==s[i+1]){

	}
}

return 0;}