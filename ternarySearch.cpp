
#include<bits/stdc++.h>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ternarySearch(int l,int r, int key,int arr[]){

	if(r>=l){

		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;

		if(key==arr[mid1]){
			return mid1;
		}
		if(key==arr[mid2]){
			return mid2;
		}

		if(key<arr[mid1]){
			return ternarySearch(l,mid1-1,key, arr);
		}

		else if(key>arr[mid2]){
			return ternarySearch(mid2+1,r,key,arr);
		}
		else{
			return ternarySearch(mid1+1	,mid2-1,key,arr);
		}



	}else {
		return -1;
	}

}



int main()
{
	fre;sync;
	int arr[]={1,2,3,4,5,6,7,8,9,12};
	int r,key;
	int l=0;
	r=9;
	key=32525;
	int x=ternarySearch(l,r,key, arr);
	if(x==-1){
		cout<<"key doesnt exist !";
	}else{
		cout<<"key exist at index  "<<x;
	}


	return 0;
}