#include<stdio.h>
//#include<conio.h>
#include<time.h>
#include<unistd.h>
int main(){

	int randonmValue;
	srand(time(NULL));

	randonmValue=(rand()%6)+1;


	printf("Wait dias is rolling.........\n");
	usleep(1000000);
	printf("U just got :%d",randonmValue);


	return 0;


}
