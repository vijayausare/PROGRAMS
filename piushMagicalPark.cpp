
#include<bits/stdc++.h>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
  		freopen("in.txt", "r", stdin);
    	freopen("out.txt", "w", stdout);
	 #endif
	
	int n ,m , k , s;
	cin>>n>>m>>k>>s;
	char a[n][m];
	bool is =1;

	for(int row=0;row<n;row++)
		for(int col =0;col<m;col++){cin>>a[row][col];}

	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			char t= a[i][j];

			if(s<k){is=0;break;}
			else if(t=='.'){
				s-=2;
			}else if(t=='*'){
				s+=5;
			}else break ;

		if(j!=n-1)s--;	
		}

	}

	if(is)cout<<"Yes"<<endl<<s;
	else cout<<"No";



	return 0 ;}