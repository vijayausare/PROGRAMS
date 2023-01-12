#include<stdio.h>


long fact (int);

int main(){

	int no;

	printf("Enter a no till u want to find facturial: ");
	scanf("%d",&no);

	long res=fact(no);

	printf("\nFacturial Till %d is: %ld",no,res);
	return 0;
}

long fact(int num){

	if(num>0){
		return num*(fact(--num));
	}
	else {
		return 1;  //return 1 at the last of the facturial
		           // if u return 0 here result will be zero
	}
}
