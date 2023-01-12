
#include <bits/stdc++.h>

using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main()

{
	fre;
    int t;

    cin >> t;

    while (t--){

    	int n ;cin>>n;
    	int arr[n];
    	for(int i =0;i<n;i++){

    		cin>>arr[i];
    	}

    	sort(arr,arr+n);
    	int count=0,flag=0;

    	for(int i =0;i<n;i++){
    		if(i+1-arr[i]<0){
    			flag=1;
    			break;

    		} count=count+(i+1-arr[i]);
    	}

    	if(flag){
    		cout<<"Second"<<"\n";
    	}else{
    		if(count%2==1){
    			cout<<"First"<<"\n";
    		}else{
    			cout<<"Second"<<"\n";
    		}
    	}
    }




    return 0;

} 