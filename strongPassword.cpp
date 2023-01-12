
#include<iostream>
#include<string>
#define passSize 6
using namespace std;
void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){int n,no=1,small=1,capital=1,special=1;
	v();string pass, numbers,lower_case,upper_case,special_characters;
numbers = "0123456789";
lower_case = "abcdefghijklmnopqrstuvwxyz";
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
special_characters = "!@#$%^&*()-+";
cin >>n;	
cin>>pass;
for(int i=0;i<n;i++){


	if(pass[i]>='0'&&pass[i]<='9'){no=0;}
	else if(pass[i]>=65&&pass[i]<=90){capital =0;}
	else if(pass[i]>=97&&pass[i]<=122){small =0;}
	else special =0;
	
}
//
int ans =no+small+capital+special;
if(ans + n < 6) {
    cout<<(ans + (6-n-ans));
  }
  else {
    cout<<ans;}

return 0;
}