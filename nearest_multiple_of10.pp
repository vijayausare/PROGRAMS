
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


int round (int n){

if(n<0) {return n;}

lld a= (n/10) * 10;

lld b =a+10;

return (n-a>b-a)? b:a;


}



int main(){
	
fre;sync;
lld n;
cin>>n;
cout<<round(n)<<endl;

	return 0;
}