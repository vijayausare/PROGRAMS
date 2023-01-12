#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
using namespace std;

#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;


 void magical_park(char a[][100], int n ,int m ,int k , int s){

bool success =true ;
	for(int i =0;i<m;i++){

		for(int j=0;j<n;j++){

			char current =a[i][j];

			if(k>s){
				success=false ;
				break ;
			}
			else if(current=='.'){
				s-=2;
			}else if(current=='*'){

				s+=5;
			}else {
				break ;
			}

			if(j!=m-1){
				s--;
			}
		}
	
	}

	if(success){cout<<"YES"<<" "<<s;}
	else NO;


}


int main(void){
  
  fre;sync;
  int n,m, k ,s;
  cin>>m>>n>>k>>s;
  char a[100][100];

  for(int i =0;i<n;i++)
  	for(int j =0;j<m;j++)cin>>a[i][j];

magical_park(a, n, m, k, s);



return 0;
}


