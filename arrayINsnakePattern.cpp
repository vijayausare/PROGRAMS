#include<iostream>
//#include<cstring>
//#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

void showStack(stack <int> s ){
		int c=0;
	while(!s.empty()){

		cout<<s.top()<<"  ";
		s.pop();c++;
	}cout<<"\n"<<c<<"\n";
}


int main(void){
  
  fre;sync;

  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  cout<<"The stack is : ";
  showStack(s);
  (s.empty())?cout<<"Empty":cout<<"Non Empty";
  
return 0;
}


