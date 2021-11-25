#include <stdio.h>
#include <math.h>
int main()

{
	int a, h;
	printf("Vvedite visoty: \n a = ");
	scanf_s("%d", &a);
	printf("Vvedite storony: \n b = ");
	scanf_s("%d", &h);

	float S;
	S = 0.5 * a * h;

	printf("S= %.2f\n", S);


	return 0;
}