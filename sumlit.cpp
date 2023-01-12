
//#include<iostream>
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
int flag =0;
string no;
getline(cin,no);
//cout<<no;



	for(int i=1;i<no.length();i++){
	
	if(no[0]=='0')
		flag =0;

	if(no[i]=='0'){
		flag =1;
	}	
}


if (flag){
	cout<<" It is duck no ";
}
else{
	cout<<"It is NOt duck no";
}


	return 0;
}