
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
fre;sync;

string s;
cin>>s;
int o=0,S=0;
int len =s.length();

for(int i =0;i<s.length();i++){
	if(s[i]=='S') S++;
	else if(s[i]=='O') o++;
}
if(S+o==s.length()){
	cout<<"0";
}else {
	cout<<s.length()-(S+o);
}


	return 0;
}


//or
/*

int main(){
    string s;
   char te[3];
    te[0]='S';
    te[1]='O';
    te[2]='S';
    cin >> s;int i=0,j=0,count=0;;
    while(s[i])
        {   if(j==3)j=0;
            if((s[i])!= (te[j]))count++;
            i++;j++;   
        }
    cout<<count;
    return 0;
}







*/