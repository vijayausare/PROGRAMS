#include<stdio.h>
int x,y;
void fab(int);
int main(){

	int z;
	printf("NO till u wanna series");
	scanf("%d",&z);

	 x=0;y=1;

		printf("%d\t ",x );


	fab(z);
	return 0;

}
void fab(int xx){
     int res;
	if(xx>0){

	res=x+y;
	x=y;
	y=res;


	printf("%d\t",x);

	fab(--xx);

	}








}
