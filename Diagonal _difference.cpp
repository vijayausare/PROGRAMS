#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){
	v();
	int t,i,j,d_sum1=0,d_sum2=0,sum=0;
	cin>>t;
	int arr[t][t];
	for(i=0;i<t;i++){

		for(j=0;j<t;j++){
			cin>>arr[i][j];
		}
	}

for(i=0;i<t;i++){

		for(j=t-i-1;j>=0;j--){
			
			
				d_sum2+=arr[i][j];

				 if(j<=t-1) break ;
			
		}
		
	}
//	cout<<d_sum2<<" ";	
  
	for(i=0;i<t;i++){

		for(j=0;j<t;j++){
			if(i==j){
				d_sum1+=arr[i][j];
			}
		}
		//	cout<<d_sum2<<" ";
	}
	//cout<<d_sum1<<" ";

sum= d_sum1-d_sum2;
cout<<abs(sum);

	return 0;
}