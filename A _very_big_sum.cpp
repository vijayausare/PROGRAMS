
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
	int t=1,i;
	cin>>t;
	long long int arr[t],sum=0;

	for(i=0;i<t;i++){
		cin>>arr[i];
	}

for(i=0;i<t;i++){
		sum+=arr[i];
	}
	
cout<<sum;


	return 0;
}