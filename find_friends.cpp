#include<iostream>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main(){
	fre;

	int t=1;
	cin>>t;
	while(t--){

		string s;
		cin>>s;
		int c=0;
		int n=s.length();
		//s.push_back('0');
		for(int i=0;i<n;i++){

			if(s[i]=='1'){
				if(s[i+1]!='1'){
					c++;
				}
			}
		}

		
		cout<<c<<endl;
	}

return 0;}