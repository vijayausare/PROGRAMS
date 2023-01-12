
#include<iostream>
using namespace std;
void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){
	v();
int c=0;
string s;
cin>>s;
if(!s.length()==0) c=1;

for(int i=0;i<s.length();i++){

	if(s[i]<97) c++;
}
cout<<c;
	return 0;
}