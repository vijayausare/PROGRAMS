
#include<iostream>

using namespace std;


int main(){

	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	 int t ;
	 cin>>t;

	 while(t--){
		 	int n ;
		 	cin>>n;

		 	int a[101]={0}, b[101]={0};
		 	for(int i = 1 ;i<=n;i++)cin>>a[i];
		 	for(int i = 1 ;i<=n;i++)cin>>b[i];

		 	int cnt =0 , xc =0 , yc =0 , x[100], y[100];
			
				for(int i  =1;i<=n;i++){

					while(a[i]>b[i]){a[i]--; x[xc++]= i ;}

					while(a[i]<b[i]){ a[i]++; y[yc++]= i ;}

				} 


			if(xc==yc){

				cout<<yc<<endl;
				for(int i = 0 ; i<xc ; i++){
					cout<<x[i]<<" " <<y[i] <<endl;}
			}else {
				cout<<-1<<endl;
			}
	 	

	}

	return 0 ;}