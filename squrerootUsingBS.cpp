
#include<bits/stdc++.h>

using namespace std;

void f(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


float find_sqr(int n , int p ){

	int s =0,e=n;
	float ans =-1;
	while(s<=e){
		
		int mid = (s+e)/2;

		if(mid*mid == n){return mid;}
		else if(mid*mid <n) {ans = mid ;s =mid+1;}
		else  {e =mid -1;}
	} 


		float prec = 0.1;

		for(int i =0;i<p;i++){

			while(ans*ans <=n){

				ans += prec;
			}
			ans -=prec;
			prec/=10;
		}

		return ans ;
}


int32_t main(){
	
	f();
	
	int n, p ;
	 cin>>n>>p;
	 cout<<find_sqr(n,6 )<<endl;	
	
	return 0;
}
