
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,

using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;


void rotate_by_using_stl(int a[][1000], int n){
// reverse the given array 

	for(int i =0;i<n;i++){
		reverse(a[i],a[i]+n);
	}
	
	// and simply take transpose of matrix 

	for(int i =0;i<n;i++)
		for(int j=0;j<n;j++)if(i>j)swap(a[i][j],a[j][i]);

    for(int i =0;i<n;i++){
		for(int j=0;j<n;j++)cout <<a[i][j]<<"\t ";
    
	cout<<endl ;
	}



}


void rotate_by_reversing_row_and_taking_transpose(int a[][1000],int n){

	for(int row =0;row<n;row++){

		int start_col =0;
		int end_col =n-1;

		while(start_col<end_col){
			swap(a[row][start_col],a[row][end_col]);
			start_col++;
			end_col--;
		}
	}


	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)if(i>j)swap(a[i][j],a[j][i]);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cout<<a[i][j]<<"\t";
	
		cout<<"\n";
    }
    cout<<endl;
}


void rotate_my_method(int a[][1000], int n){

	for(int col =n-1;col>=0;col--){
		for(int row =0;row<n;row++){
			cout<<a[row][col]<<"\t";
		}
		cout<<endl ;
	}

	cout<<endl ;
}





int main(){
	
  fre;sync;
  int n ;
  cin>>n;
  int a[1000][1000];

  for(int i=0;i<n;i++){

  	for(int j =0;j<n;j++){
  		cin>>a[i][j];
  	}
  }


rotate_my_method(a , n );
//rotate_by_reversing_row_and_taking_transpose(a,n);
rotate_by_using_stl(a, n);

	return 0;
}