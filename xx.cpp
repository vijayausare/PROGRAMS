#include<bits/stdc++.h>


 

using namespace std;


 

int main()

{
{
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
#endif

}


string a;

string b;

cin>>a;

cin>>b;

long int len1=a.size();

long int len2=b.size();

int t,flag=0;

if(len1==len2)

{

for(int i=0;i<len1;i++)

{

if(a[i]>b[i])

{

cout<<"NO";

break;

}

else

{

flag=1;

t=i;

}

}

if(flag==1 && t==len1-1)

{

cout<<"YES";

}

}

else

{

cout<<"NO";

}

}