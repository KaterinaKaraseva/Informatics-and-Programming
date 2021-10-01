#include <stdio.h>

int main() {
	int number;
	int isWork = 1;

	while (isWork) {
		printf("Let's ivers numbers!\n");
		printf("  For exit enter 0\n\n");
		/* ... */

		int isError = 0;

		//GOOD CODE
		do {
			if (isError) printf("Wrong Input: Try again\n");

			printf("Input positive number: ");
			scanf_s("%d", &number);

			if (number == 0) {
				isWork = 0; // work = lie
				break;
			}

			isError = (number <= 0);
		} while (isError);

		int invers = 0;
		while (number) {
			invers *= 10;
			invers += number % 10;
			number = number / 10;
		}

		// ...
		printf("Result: %d\n", invers);
	}

  return 0;
}
/*
	printf("Let's ivers numbers!\n");

	do {
	printf("Input number: ");
	scanf_s("%d", &number);
	} while (number < 0);

	return 0;
}
*/