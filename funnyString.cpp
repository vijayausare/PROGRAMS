
#include<iostream>
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

int t=1;
cin>>t;

while(t--){
    int count =0;
    string s,r;
   
    cin>>s;
     lld len =s.length();
    r=s;
    reverse(r.begin(),r.end());
    //cout<<s<<endl<<r;
    for(int i=1;i<=len;i++){

    	if(abs(r[i]-r[i-1])==abs(s[i]-s[i-1])){count++;}
    }
    



  

   

    cout<<((count==len-1)?"Funny\n":"Not Funny\n");




}



return 0;}
