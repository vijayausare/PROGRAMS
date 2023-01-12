#include<stdio.h>
#include<stdlib.h>

int main(){

	int n,*ptr;

	printf("Enter number till u want to print the natural number");
	scanf("%d",&n);

	ptr =(int*)malloc(n*sizeof(int));

	puts("Enter the n natural nos");

	for(int i=0;i<n;i++){

		ptr[i]=i+1;
	}
for(int i=0;i<n;i++){

		printf("%d\t",ptr[i]);
	}

return 0;
}
