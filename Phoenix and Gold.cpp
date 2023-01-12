
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

void rotate(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}

int main(){
	
	//fre;sync;
	int t=1;
	cin>>t;
	while(t--){
		int n ,x, sum =0;
		cin>>n>>x;
		int a[n];
		for(int i =0;i<n;i++){
		 	cin>>a[i];
		 	sum+=a[i];
		 }

		 if(sum==x)cout<<"NO\n";
		 else{
		 	sum =0;
		 	cout<<"YES\n";
		 	for(int i =0;i<n;i++){

		 		sum+=a[i];

		 		if(sum ==x){
		 			i++;
		 			cout<<a[i]<<" "<<a[i-1]<<" " ;
		 		}else{
		 			cout<<a[i]<<" " ;
		 		}
		 	}cout<<endl ;
		 }

		 

	 }

		 


	return 0;
}