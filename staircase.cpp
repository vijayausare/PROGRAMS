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
	int t,x,i,j;
	cin>>t;

	for(i=0;i<t;i++){
		
		for(j=t-1;j>i;j--){
			cout<<" ";
		}

		for(x=0;x<=i;x++){
			cout<<"*";
		}



		cout<<"\n";
	}


	return 0;
}