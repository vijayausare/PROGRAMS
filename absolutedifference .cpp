
#include<iostream>
using namespace std;

void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}

void check(){
	 int m,n,i,flag=0,j,k;
	 cin>>m;
	 cin>>n;
	 int arr[n];
	 for(k=0;k<n;k++){
	 	cin>>arr[k];
	 }

	  for(i=0;i<n;i++){

	  	for(j=i;j<n;j++){

	  		if(arr[i]+arr[j]==m){
	  			flag =1;
	  			break ;

	  		}
	  	}if(flag) break ;
	  }

	  cout<<i+1<<" "<<j+1;


}
int main(){
	v();
	int t=1;
	cin>>t;
	while(t--){
		check();
	}


	return 0;
}