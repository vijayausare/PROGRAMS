#include<bits/stdc++.h>
using namespace std; 


void swap(int a, int b ){
	 int temp =  a;
	 a=b; 
	 b =temp ; 
}

void bubble_sort(int a[], int n ){
	
	for(int i = 1; i<n ; i++){

		 for(int  j =0; j <= n -i -1 ; j++ ){

		 	 if(a[j]>a[j+1]) swap(a[j], a[j+1]); 

		 }
	}	
}

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	 
	 int n ; 
	 cin>>n; 
	 int a[10000000];

	 for(int  i = 0 ; i< n ; i++)cin>>a[i];

	 bubble_sort(a, n);

	return 0 ;
}