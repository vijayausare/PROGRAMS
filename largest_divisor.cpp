
#include<iostream>
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
	int t;
	cin>>t;
	int ans;
	for(int i=1;i<=10;i++){

		if(t%i==0){ans=i;}
		
	}

	cout<<ans;
	return 0;
}