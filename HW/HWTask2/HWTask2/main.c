#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>


int main() {

	setlocale(LC_ALL, "RUS");

	int hidden, intro, attem;

	hidden = 0;
	attem = 0;

	printf("��������� ��������� �����\n");
	printf("���������� ����� ��������� � ��������� �� 1 �� 1000\n");

	srand(time(NULL));

	intro = rand() % 1000 + 1;

	while (hidden != intro) {

		printf("������� �����: ");
		scanf("%d", &hidden);

		attem += 1;

		if (hidden > intro) {
			printf("����� ������ �����������\n");
		}
		if (hidden < intro) {
			printf("����� ������ �����������\n");
		}
		if (intro == hidden) {
			printf("\n�� ������� ���������� �����\n");
			printf("������� ���������: %d", attem);
			return 0;
		}
	}
}
