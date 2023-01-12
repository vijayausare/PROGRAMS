
#include<bits/stdc++.h>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	int n;
	cin>>n;
	int a[n];

	for(int i =0;i<n;i++)cin>>a[i];

	int i =0,j=n-1;
	bool is =1;
	while(i<=j){

		if(a[i]!=a[j])is=0;

		i++;
		j--;
	}
	if(is)cout<<"true";
	else cout<<"false";

	return 0 ;}