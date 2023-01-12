
#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	
	// go;
	int t=1;
	cin>>t;
	while(t--){
		int n ,h;
		cin>>n>>h;
		// int a[n];

		for(int i =0 ; i<n;i++){cin>>a[i];}
		sort(a,a+n);

		int x = a[n-1];
		int y = a[n-2];

		int cnt=2; 

		while(1){
			if(h<=0)break;
			else {

				if(cnt%2==0)h-=x;
				else h-=y;

				cnt++;
			}
		}

		cout<<(cnt-2)<<endl;

		// cout<<x<<y<<endl ;

	}
	return 0;
}
