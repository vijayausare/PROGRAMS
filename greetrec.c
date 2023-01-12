#include<stdio.h>


void greet(int);

int main(){
	int no;

	printf("Enter no hoe many times u wanna greet");
	scanf ("%d",&no);

	greet(no);
	return 0;

}

void greet(int num){
	if(num>0){
		puts("welcome");
		greet(--num);
	}
}

