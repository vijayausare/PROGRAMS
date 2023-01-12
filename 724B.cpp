
#include<bits/stdc++.h>
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

void solve(string s,int n){

	for(int i =0;i<=26;i++){

		for(int j=0;j<=26;j++){

			for(int k =1;k<=26;k++){
				string ans;

				if(i!=0)ans+='a'+ i-1;
				if(j!=0)ans+='a'+ j-1;

				ans+='a'+ k-1;

				if(s.find(ans)>=s.size()){
					cout<<ans<<endl;
					return;
				}
			}
		}
	}
}

int main(){
	
	//go;
	int t;
	cin>>t;
	while(t--){

		int n;
		string x;
		cin>>n;
		cin>>x;

		solve(x,n);

	}
	
	
	return 0;
}
