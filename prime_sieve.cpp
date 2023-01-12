
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


	void prime_sieve(int *p){

		for(int i = 3;i<=1000000; i+=2){
			p[i]= 1;//makking all odd as prime
		}

		for(int i = 3; i<1000000; i+=2){

			if(p[i]){

				for(int j = i*i; j<1000000;j+= i  ){

					p[j]= 0;
				}
			}
		}

		p[2]=1;
		p[0]=p[1]=0 ;
	}

	int32_t main(){
		
		go;
		int n ; cin>>n;
		int cumsum[1000005]= {0};
		int p[1000005]={0};

		prime_sieve(p);

		

		for(int i =1; i<=1000000; i++){
			cumsum[i]=cumsum[i-1]+p[i];

		}
		

		for(int i = 9;i<=n;i++){

			if(p[i]){

				cout<<i<<" ";
			}
		}cout<< cumsum[20]- cumsum[10]<<endl;
		return 0;}
