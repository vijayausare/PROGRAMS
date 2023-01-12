#include <stdio.h>
#include<string.h>

double getAvg(float *, int);

int main(){

	float nos[]={1,20.3,11,33,654.5};

	int *ptr;

	ptr=nos;

	double avg=getAvg(ptr,8);

	printf("%lf",avg); 
	return 0;
}
double getAvg(*ptr, int size){

	double sum=0;

	for(int i=0;i<size;i++){

		sum+=ptr[i];
		ptr++;

	}
	return sum/size;
}

