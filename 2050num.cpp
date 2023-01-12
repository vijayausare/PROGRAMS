
#include<iostream>
 using namespace std ;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main(){
	
	fre;
	int t=1;
	cin>>t;
	while(t--){
		 long long  n;
		 cin>>n;
		
		 if(n%2050!=0){

		 	cout<<"-1\n";
		 }else{


		 	long long  sum =0;
		 	 n=n/2050;

		 	while(n){

		 		sum=sum+n%10;
		 		n =n /10;
		 		
		 	}

		 	cout<<sum<<endl ;
		 }









		}
	return 0;
}