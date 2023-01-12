
#include<iostream>
//#include<bits/stdc++.h>
#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,

using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

bool isPalindrome(char a[]){
int j =strlen(a)-1;
int i =0;

while(i<j){

	if(a[i]==a[j]){
		i++;
		j--;
	}else return false ;

}
return true ;


}



int main(){
	
	fre;sync;
	char a[1000];
	cin.getline(a,1000);
	(isPalindrome(a))?cout<<"Paalindrome":cout<<"Not Paalindrome";




	return 0;
}