#include<stdio.h>


int main(){
int size, shift,i,f,j;
printf("enter size of array ");
scanf("%d",&size);
int arr[size];

for(i=0;i<size;i++){
	scanf("%d",&arr[i]);

}


printf("\nEnter no of times array should be shifted");
scanf("%d",&shift);

for(f=0;f<shift;f++){

	int temp=arr[0];

	for(i=0;i<size-1;i++){            //here size -1 is taken because at last position there is no no
		arr[i]=arr[i+1];


	}
	arr[i]=temp;  ///here we are storing first element at the last position

}

for(j=0;j<size;j++){
	printf("%d",arr[j]);

}

return 0;}
#include<stdio.h>


int main(){
int size, shift,i,f,j;
printf("enter size of array ");
scanf("%d",&size);
int arr[size];

for(i=0;i<size;i++){
	scanf("%d",&arr[i]);

}


printf("\nEnter no of times array should be shifted");
scanf("%d",&shift);

for(f=0;f<shift;f++){

	int temp=arr[0];

	for(i=0;i<size-1;i++){            //here size -1 is taken because at last position there is no no
		arr[i]=arr[i+1];


	}
	arr[i]=temp;  ///here we are storing first element at the last position

}

for(j=0;j<size;j++){
	printf("%d",arr[j]);

}

return 0;}
