#include<stdi.h>

int main(){

	struct Book {

		int prize;

		char auth[20];
	};

	struct Book b1;

	printf("Enter prize");
	scanf("%d",b1.prize);

	printf("Enter author name ");
	scanf("%s",b1.auth);

	printf("%d",b1.prize );
	printf("%s",b1.auth );


return 0;

}