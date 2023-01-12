#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;



void primeN(int n){
bool prime[n+1];
memset(prime,true,sizeof(prime));
//for(int z=0;z<n;z++)prime[z]==true;

for(int i =2;i*i<=n;i++){

    if(prime[i]){

        for(int j=i*i;j<=n;j+=i){

            prime[j]=false ;
        }
    }
}


for(int i =2;i<=n;i++){

    if(prime[i])cout<<" "<<i;
}
}


int main(void){
  
  fre;
  sync;
 
 int n;
 cin>>n;

 primeN(n);

return 0;
}
