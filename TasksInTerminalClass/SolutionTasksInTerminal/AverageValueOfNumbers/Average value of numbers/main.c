#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c;
	float av1, av2, av3, av4;

	printf("Vvedite 3 chisla dla vicheslenia: ");
	scanf_s("%d %d %d", &a, &b, &c);

	av1 = (a + b + c) / 3;
	printf("Srednee znachenie = %.2f\n", av1);

	av2 = (pow(a, 2) + pow(b, 2) + pow(c, 2)) / 3;
	printf("Srednee kvadratov = %.2f\n", av2);

	av3 = (fabs(a) + fabs(b) + fabs(c)) / 3;
	printf("Srednee moduley = %2.f\n", av3);

	av4 = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
	printf("Srednee korney = %.2f\n", av4);
		
	return 0;
}