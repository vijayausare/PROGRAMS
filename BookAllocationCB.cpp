
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
#include<algorithm>       // sort ,
#include<stack>           //stack,
#include<climits>         // INT_MAX ,INT_MIN,
#include<vector>
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
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/

bool isPossible(int b[], int n , int student, int min_pages){

	int sum = 0;
	int studentNO = 1;
	int reading_page  = 0;

		for(int i =0;i<n;i++){
			if(reading_page+b[i]> min_pages){

			studentNO++;
			reading_page = b[i];

			if(studentNO>student)return false;}
			else {
			reading_page+=b[i];
		}
	}

	return true;
}

int findPages(int b[], int n , int student ){
	int sum=0;
	for(int i =0;i<n;i++)sum+=b[i];
	int s =b[n-1];
	int e =sum;

	int ans  =INT_MAX;

	while(s<=e){

		int mid = (s+e)/2;

		if(isPossible(b,n,student,mid)){
			ans  = min(ans ,mid);

			e = mid -1;
		}else {
			s =mid +1;
		}
	} 
	return ans ;
}

int32_t main(){
	
	go;
	int t;
	cin>>t;
	while(t--){

		int book ,student;
		cin>>book>>student;
		int b[1000];
		for(int i= 0 ;i<book;i++)cin>>b[i];

		cout<<findPages(b,book, student)<<endl;
	}
	
	
	return 0;
}
