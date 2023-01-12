#include<stdio.h>
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main(){
	fre;
	char b[50];

	int a=9,bb=5,c;

	c=a+bb;

	sprintf(b,"sum of %d and %d is %d",a,bb,c);

	printf("%s",b);
	return 0;
}