
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

#define rep(i,start,lim) for(lld i=start;i<lim;i++)
#define repd(i,start,lim) for(lld i=start;i>=lim;i--)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
    
fre;sync;
int t;
cin>>t;

while(t--){
    string s="hackerrank";
    string a;
    cin>>a;

    int x=0;
    for(int i=0;i<a.length()&&x<s.length();i++){

        if(a[i]==s[x]){
            x++;
        }
    }

    if(x==s.length()) YES;
    else NO;
}

    return 0;
}