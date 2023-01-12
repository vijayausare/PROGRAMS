#include<stdio.h>

int main(){

	int num,i,cpyno=0,reminder,initialno;

	printf("Enter a no that u want to czlculate the digit");
	scanf("%d",&num);

	num=initialno;

	while(num>0){
		reminder=num/10;
		cpyno=cpyno*10+reminder;

	}
	if(cpyno==initialno){
		printf("IS palindrome");
	}
	else
		printf("not palndrome" );



}