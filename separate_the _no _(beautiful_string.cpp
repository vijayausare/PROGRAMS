//////////////////////////incomplete///////////////////////
/* ///////////////////////completed //// overflow to stoi /////
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){

fre;sync;

int t =1;
cin>>t;
while(t--){

	string s;
	cin>>s;long long  xx;
	string firstS;
	int flag =0;
	for(long long i=1;i<=s.length()/2;i++){

		firstS =s.substr(0,i);
		 long long  firstI= stoi(firstS);
		//cout<<firstI<<" ";
		string x=firstS;
		 xx=firstI;

		while(x.length()<=s.length()){

			x+=to_string(++firstI);
			//cout<<firstS<<" ";

			if(x==s) {flag =1;
			break ;
		}
		}
			if(flag) break;
}
if(flag) cout<<"YES"<<" "<<xx<<endl;
else cout<<"NO"<<endl;

}

	return 0;

}

*/

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdint>
#include <algorithm>
using namespace std;
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

#define ll long long
uint64_t stoi(string &s)
{
    istringstream istr(s);
    uint64_t n;
    istr >> n;
    return n;
}

int main(){

fre;

int t ;
cin>>t;
while(t--){

  string s;
  cin>>s;

  string firstS;
  int flag =0;
  for(int i=1;i<=s.length()/2;i++){

    firstS =s.substr(0,i);
    uint64_t firstI= stoi(firstS);

    string x=firstS;

    while(x.length()<s.length()){

      x+=to_string(++firstI);
      //cout<<firstS<<" ";
   

      
    }
       if(x==s){
          flag=1;
          break;
      }
    }
    flag==1?cout<<"YES "<<firstS<<endl:cout<<"NO"<<endl;
      
}



  return 0;

}