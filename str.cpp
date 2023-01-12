#include <iostream>
#include<cstring>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	 #endif
    int a[]={1,2,3,4,5,6};
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    char s[100] ="i am ,vijay shivaji ,ausare ";
    char *ptr =strtok(s,",");
    cout<<ptr<<endl ;
    while(ptr!=NULL){
    	ptr =strtok(NULL,",");
    	cout<<ptr<<" \n";
    }



return 0;
}
