
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
	
	int t =5,i,j,sum=0,Sum[5],z=0;
	int arr[5];

	for(i=0;i<t;i++){

		cin>>arr[i];
	}

	for(i=0;i<t;i++){
     
    	sum=sum+arr[i];
	}
	

	int lrg=arr[0],small=sum;
	for(i=0;i<t;i++){

		Sum[i]=sum-arr[i];
		if(Sum[i] > lrg) lrg=Sum[i];
		if (Sum[i] < small) small=Sum[i];
	}

cout <<small<<" "<<lrg;

	return 0;
}