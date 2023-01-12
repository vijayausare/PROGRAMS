#include<iostream>
using namespace std; 

bool srch(int s,int n, int a[] ){
	
	int i = 0 , j =n-1; 

	while(i<n and j >=0){

	if(s==a[i][j])return 1 ; 

	if(s<a[i][j])i++;
	else j++;

	}

return 0 ; 
}

int main(){
	
	int n,f ; 
	cin>>n>>f;
	int a[n][n];
	for(int i = 0; i<n ;i++)
	for(int j =0 ; j<n; j++)cin>>a[i][j];

	if(srch(f, n,a))cout<<"found"<<endl ; 
	else cout<<"Not found ";
	return 0 ; 

}