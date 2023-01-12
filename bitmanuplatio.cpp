
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
	fre;sync;
	int t=1;cin>>t;
	while(t--){
		int c;cin>>c;
		int ar[c];
		int max=1,maxx=1;
		int i ,j;
		for(int a=0;a<c;a++){
			ar[a]=a+1;
		}

		for(i=0;i<c;i++){

			for(int j=0;j<c;j++){


				if((ar[i]^ar[j])==c){

					// if(ar[i]>max1)
					// 	max1=ar[i];
					// if(ar[j]>max2)
					// 	max2=ar[j];

					maxx =ar[i]*ar[j];
					if(maxx>max){max=maxx;}
					//cout<<ar[i]<<" "<<ar[j]<<"\n";
					
				}

			}
		}
	

			cout<<max<<"\n";

	}

	return 0;
}