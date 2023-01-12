#include<stdio.h>

int main() {
	void checkFn();
	int testCase, i;
	scanf("%d", &testCase);
	for (i = 0; i < testCase; i++) {
		checkFn();
	}

	return 0;
}

void checkFn() {
	int cities, jumpSize, currentCity, livingCity;

	scanf("%d%d%d%d", &cities, &jumpSize, &currentCity, &livingCity);
//int affectedCity[cities %jumpSize];
	int city[cities], i, j, x = 0, y = 0, flag = 0;

	for (i = 0; i <= cities; i++) {

		city[i] = i + 1;
	}

	for (i = 0; i < currentCity - 1; i++) {

		int temp = city[0];

		for (j = 0; j < cities - 1; j++) {

			city[j] = city[j + 1];

		}

		city[j] = temp;

	}
	/*for(i=0;i<cities ;i++){
	 printf("%d",city[i]);
	 }
	 */
	while (1) {

		if (y >= cities) {
			break;
		} else {
			x = city[y];
			y += jumpSize;
		}
		if (x == livingCity) {
			flag = 1;

		}

	}

	if (flag == 1) {
		printf("YES");

	} else {
		printf("NO");
	}

}