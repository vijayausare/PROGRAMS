
#include<bits/stdc++.h>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	


	int  t;
	cin>>t;

	while(t--){
		string a,b ;
		cin>>a;
		cin>>b;
		for(int i =0;i<a.length();i++){

			if(a[i]==b[i])cout<<0;
			else cout<<1;
		}
		cout<<endl;

	}



	return 0 ;}