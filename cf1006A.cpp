#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	

	int t ;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int a[100];
		int mx= INT_MIN,mn=INT_MAX;
		for(int i =0;i<n;i++){
			cin>>a[i];
			mx  =max(mx,a[i]);
			mn = min(mn,a[i]);

		}
		int mnn=0,mxn=0;
		for(int i =0;i<n;i++){

			if(a[i]==mx)mxn=i;
			if(a[i]==mn) mnn=i;
		}

		int rm=0,rmn=0;
		for(int i =n-1;i>=0;i--){

			if(a[i]==mx)rm=i;
			if(a[i]==mn) rmn=i;
		}
		rm =n-rm-1;
		rmn =n-rmn-1;
		int m1 =min(mxn,rm);
		int m2=min(mnn,rmn);		
		cout<<m1+m2<<endl;	

	


	}

return 0 ;
}
