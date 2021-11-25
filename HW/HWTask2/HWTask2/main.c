#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>


int main() {

	setlocale(LC_ALL, "RUS");

	int hidden, intro, attem;

	hidden = 0;
	attem = 0;

	printf("Загаданно случайное число\n");
	printf("Загаданное число находится в диапазоне от 1 до 1000\n");

	srand(time(NULL));

	intro = rand() % 1000 + 1;

	while (hidden != intro) {

		printf("Введите число: ");
		scanf("%d", &hidden);

		attem += 1;

		if (hidden > intro) {
			printf("Число больше загаданного\n");
		}
		if (hidden < intro) {
			printf("Число меньше загаданного\n");
		}
		if (intro == hidden) {
			printf("\nВы угадали загаданное число\n");
			printf("Попыток совершено: %d", attem);
			return 0;
		}
	}
}
