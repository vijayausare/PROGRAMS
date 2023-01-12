
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
#include<algorithm>       // sort ,
#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
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

// int firstdigit(int n ){

// 	while(n>=10){
// 		n/=10;
// 	}
// 	return n;

// }

// bool cmp(int a ,int b){
// 	return a>b;
// }

// int32_t main(){
	
// 	go;
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n ;cin>>n;
// 		int a[n];
// 		int maxDigit=0,idx;
// 		for(int i =0;i<n;i++){
// 			cin>>a[i];
// 		}
// 		sort(a,a+n,cmp);
// 		for(int i =0;i<n;i++){
// 			//cout<<firstdigit(a[i]);
// 			int temp =firstdigit(a[i]);
// 			if(temp > maxDigit){maxDigit=temp;  
// 			 idx=i;}
// 		}
// 		cout<<a[idx];
// 		for(int i =0;i<n;i++){
// 			if(i==idx)continue;
// 			else cout<<a[i];
// 		}
// 	}


//using string 	

bool cmp(string x , string y){

	string xy =x.append(y);
	string yx=y.append(x);
	/*here we are comparing two no i.e
	consider x=60 and y =578
	then xy =60578 and yx 57860
	hence here sy is greater so we will put x first 
*/
	return yx.compare(xy);

}
int32_t main(){
	go;
	int t ;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<string>a;

		for(int i =0;i<n;i++){
			string temp;
			cin>>temp ;
			a.push_back(temp);
		}

		sort(a.begin(),a.end(),cmp);

		for(int i =0;i<n;i++){
			cout<<a[i];
		}cout<<endl;


	}

	
	
	return 0;
}
