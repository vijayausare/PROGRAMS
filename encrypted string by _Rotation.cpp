
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define rep(i,start,lim) for(lld i=start;i<lim;i++)
#define repd(i,start,lim) for(lld i=start;i>=lim;i--)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
fre;
sync;

lld n;
string s ;
int rotate ;
cin>>n;
cin>>s;
cin>>rotate;
int temp ;
for(int i =0;i<n;i++){

	for(int j=0;j<rotate;j++){

		if(s[i]<=90&&s[i]>=65){
		 temp =s[i];
			s[i]=temp+1;

			if(s[i]>90){
				s[i]=65;
			}
		}
			//s[i]=temp ;
		
		if(s[i]<=122&&s[i]>=97){
			temp =s[i];
			s[i]=temp+1;


			if(s[i]>122){
				s[i]=97;
			}
		}
			//s[i]=temp ;
		}
		//s[i]=temp;

	}


cout<<s;
	return 0;

}