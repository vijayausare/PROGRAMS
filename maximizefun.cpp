
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
	
	fre;
	sync;
	int t;
	cin>>t;
	while(t--){
		int ans=0,n;cin>>n;
		lld arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		sort(arr,arr+n);

		ans=2*(arr[n-1]-arr[0]);


		cout<<ans<<  "\n";
	}


	return 0;
}