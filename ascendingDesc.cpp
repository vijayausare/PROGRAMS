
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
	fre;sync;
	lld array[]={1,2,3,6,5,4,8,2,1,6,8,9,52,23,5,2,3};

	int size=sizeof(array)/sizeof(array[0]);

	cout<<"array in ascending order \n";
		sort(array,array+size);
		for(int i=0;i<size;i++){
			cout<<array[i]<<" ";
		}

	cout<<"array in desceding order \n";
		sort(array,array+size, greater<int>());
		for(int i=0;i<size;i++){
			if(array[i+1]==array[i]) continue;
			cout<<array[i]<<" ";
		}




	return 0;
}