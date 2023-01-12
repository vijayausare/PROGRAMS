//Enormous Input Test 
#include<iostream>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	fre;sync;

	int n,k,count=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){

		cin>>arr[i];
		if(arr[i]%k==0){
			count++;
		}

	}
	
cout<<count;
return 0;}