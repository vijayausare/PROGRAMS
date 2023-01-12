#include<iostream>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){

	fre;
	//sync;

	int n,ans=0;
	cin>>n;

	if(n>=2&&n<=1000){
		int t;
		for(t=1;t<=10;t++){
			if(n/t==0) {ans=t;}
		}
		}
	
	cout<<ans;
return 0;
}