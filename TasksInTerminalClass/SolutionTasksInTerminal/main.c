#include <stdio.h>

/*
*/


int main() {
	int number;
	int isWork;
	/*
	printf("Let's ivers numbers!\n");

	do {
	printf("Input number: ");
	scanf_s("%d", &number);
	} while (number < 0);
	
	return 0;
}
*/

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

   // ...
   printf("Result: %d", invers);

  return 0;
}