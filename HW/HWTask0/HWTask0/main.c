/*Определить, каково взаимное расположение двух окружностей с заданными координатами центров и радиусами.*/

#include <stdio.h>
#include <math.h>

int main()
{
	printf("Task with circles");
	//init

	float x1, x2, y1, y2, r1, r2;
	float d;

	printf("Input 1st circle (i form x y r):");
	scanf_s("%f %f %f", &x1, &y1, &r1);

	printf("Input 2st circle (i form x y r):");
	scanf_s("%f %f %f", &x2, &y2, &r2);

	//action

	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	//output
	if ((r1 == r2) && d == r1 + r2) {
		printf("Casaetca");
	}
	else {
		if (r1 < d && r2 > d) {
			printf("Peresecautca");
		}
		else if (r1 > d && r2 < d) {
			printf("Peresecautca");
		}
		else if ((x1 >= x2) && (y1 >= y2) && (d < r1 + r2)) {
			printf("Odna v drugoi");
		}
		else if ((x1 <= x2) && (y1 <= y2) && (d < r1 + r2)) {
			printf("Odna v drugoi");
		}
		
	}
	

		return 0;


}