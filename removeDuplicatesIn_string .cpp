
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
//#include<algorithm>       // sort ,
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

void removeDuplicates(char a[]){

	int len =strlen(a);
	if(len ==1 or len==0)return ;

	int previous =0;

	for(int current =1;current<len ;current++){

		if(a[previous]!=a[current]){

			previous++;
			a[previous]=a[current];

		}

	}a[previous+1]='\0';
	return;
}

int main(){
	
	fre;sync;
	char a[1000];
	cin.getline(a,1000);

	removeDuplicates(a);
	cout<<a;



	return 0;
}