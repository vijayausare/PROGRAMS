		#include<iostream>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int arr[2];
int main(){
fre;
cout<<arr[0]<<" "<<arr[1]<<endl;
void printArray(int *);


	int arr[5];

	cout<<"size of Int for this machine is "<<sizeof(int)<<endl;
	for(int i=0;i<5;i++){
		cout<<"address of"<<i<<" "<<&arr[i]<<endl;	}


	int a2[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){

		cout<<i[a2]<<" "<<a2[i]<<" ";
	}
	cout<<"\n";

long long a3[4],sum=0;
for(int i=0;i<4;i++){

	cin>>a3[i];
	sum+=a3[i];

}cout<<sum<<endl;

cout<<"size of total arr is "<<sizeof(a2)<<"\n";
int siZe =sizeof(a2)/sizeof(a2[0]);cout<<siZe<<endl;
printArray(a2);

	return 0;
}
void printArray(int *ax){	
	cout<<ax[3];

}