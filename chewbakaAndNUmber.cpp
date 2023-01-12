#include<bits/stdc++.h>
using namespace std;

#define int long long int 

int32_t main(){


	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif


	int n;
	cin>>n;

	int multiply =1, ans =0;

	while(n!=0){

		int rem =n%10;

		if(rem>=5){

			if(rem==9 and (n/10)==0){
				// do nothing 
			}else {
				rem = 9-rem ;

			}
		}
		ans+=rem*multiply;
		multiply*=10;
		n/=10;

	}
	cout<<ans;return 0;
}
