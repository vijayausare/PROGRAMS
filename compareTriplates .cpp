
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
	int arr1[3],arr2[3],i,j,x=0,y=0;

	for(i=0;i<3;i++){
		cin>>arr1[i];
		//cin>>arr2[i];

	}
	for(i=0;i<3;i++){
		cin>>arr2[i];
		//cin>>arr2[i];

	}

	for(i=0;i<3;i++){

		if(arr1[i]>arr2[i]) x++;
		else if(arr1[i]<arr2[i]) y++;
		else continue;
	}
	cout<<x<<" "<<y;
	return 0;
}