///////////////////////////////////////INCOMPLETE ////////////

///// SHOWING ERROR ???????????????????????

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
	
fre;
sync;

string f,s;
cin>>f;
cin>>s;
int flag =0;
//string v="aeiou";
int j=0;
int v=0,c=0;
for(int i=0;i<f.size()&& j<s.size();i++){

	if (f[i] == 'a' || f[i] == 'e' || f[i]== 'i' || f[i] == 'o' || f[i] == 'u'){

		if (s[j] == 'a' || s[j] == 'e' || s[j]== 'i' ||  s[j] == 'o' || s[j] == 'u'){


		v=1;}
			}


if (f[i] != 'a' && f[i] != 'e' && f[i]!= 'i' && f[i] != 'o' && f[i] != 'u'){

		if (s[j] != 'a' && s[j] != 'e' && s[j]!= 'i' &&  s[j] != 'o' && s[j] != 'u'){


		c=1;
		}


}


j++;}

if(c==1&&v==1){
	YES;
}else NO;






	return 0;
}