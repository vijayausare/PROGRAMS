// #include <bits/stdc++.h>
#include<iostream>

using namespace std;

void rotateByd(int*a ,int d ,int n){

	int j = 0 ;
	int t[n] ; 

	for(int i = d; i< d+n; i++){
		cout<<i<<" "<<n<<" "  ;
		t[j++]= a[i%n]; 
		cout<<i%n<<"  "<<endl ; 
	}

	for(int i =0 ; i<n ;i++){
		cout<<t[i]<<" "; 
	}
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n ; 
	cin>>n ; 
	int a[n]; 
	int d ; 
	cin>>d; 

	for(int i = 0 ; i<n ;i++)cin>>a[i]; 

	rotateByd(a, d , n );


return 0;
}
