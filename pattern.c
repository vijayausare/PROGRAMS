/*	program written for the 
*/



#include<stdio.h>

int main(){

	int arr[2][3]={};
	int i,sum=0,j;

	printf("Enter the array Elements");

	for (i=0;i<2;i++){

		for (j=0;j<3;j++){

			scanf("%d",&arr[i][j]);

		}
	}

	for (i=0;i<2;i++){
		printf("\n");

		for (j=0;j<3;j++){

			printf("%d  ",arr[i][j]);

			sum=sum+arr[i][j];

			
		}
	}
	printf("Sum is : %d",sum);
	return 0;

}