
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
using namespace std;
#define int long long int
#define go f()
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl '\n'

void f(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/
bool arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
 
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    return arraySortedOrNot(arr, n - 1);
}

int32_t main(){
	
	go;

	int t=1;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		int a[n];
		int cnt=0;
		for(int i =0;i<n;i++)cin>>a[i];
		if(arraySortedOrNot(a,n))cout<<0<<endl;
		else{
				for(int i =0;i<n-1;i++){   
					for(int j =0;j<(n-i-1);j++){
						if(a[j]>a[j+1]){ cnt++;swap(a[j],a[j+1]);}
					}
				}  
			
				cout<<cnt<<endl;
			}

	

	}



	return 0;
}