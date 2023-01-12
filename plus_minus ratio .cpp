
#include<iostream>
#include <iomanip> 
using namespace std;

void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){
	v();
	int t=1, i,pos=0,neg=0,zero=0;
	cin>>t;
	int arr[t];

	for(i=0;i<t;i++){

		cin>>arr[i];
	}

	for(i=0;i<t;i++){

		if(arr[i]<0) neg++;
		if(arr[i]==0) zero++;
		if(arr[i]>0)  pos++;
	}
	//cout <<pos<<neg<<zero ;
double x,y,z,u=t;

	
		x=pos/u;
		y=neg/u;
		z=zero/u;

	
	//cout <<x<<y<<z ;

	 cout << fixed << setprecision(6) << x<<endl;
	cout<<setprecision(6)<<y<<endl;
	cout<<setprecision(6)<<z;




	return 0;
}