#include<iostream>
#include<string>

using namespace std;


void v(){
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}
int main(){
	v();

	string s="original string";
	string v="second string ";
	s.push_back('v');
	cout<<s<<endl;
	cout <<" the capacity is " << (s.capacity())<<endl;
	//cout <<" using  resize as5 " << (s.resize(20))<<endl;
	s.shrink_to_fit();
	cout<<" after using shrink_to_fit capacity of string :"<<s.capacity()<<endl;



	return 0;
}