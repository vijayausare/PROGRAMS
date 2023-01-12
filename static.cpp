
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
	int y=7;
	static int x=y;

	if(x==y){
		cout<<"equal";
	}
	else if(x>y) cout<<"greater ";
	else cout<<"less than ";


	return 0;
}