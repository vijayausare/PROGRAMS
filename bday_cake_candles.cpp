
#include<iostream>
using namespace std;

void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){
	v();int t=1,x=0,i=0,z=0;
	cin>>t;
	int arr[t];
for (int i = 0; i < t; i++)
{
	cin>>arr[i];
}
for (int i = 0; i < t; i++)
{
	for(x=0;x<t;x++){

		if(arr[i]-arr[x]==0 && i!=x) {z++; cout<<z<<" ";} 
	}
}
cout<<z;
	return 0;
}
