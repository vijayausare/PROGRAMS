

// A Simple C++ program to reverse a string 
#include <bits/stdc++.h> 
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
using namespace std;
// Driver program 
int main() 
{ fre;
	string str;
	int n;
	cin>>n;
	cin>>str;
	int count=0;
//int n = str.length(); 

	// Swap character starting from two 
	// corners 
	for (int i = 0; i < n / 2; i++) {
		swap(str[i], str[n - i - 1]); 
	}
	
   
	cout<<str<<count;
	char A='a';
	cout<<(int)A; 
	return 0; 
} 
