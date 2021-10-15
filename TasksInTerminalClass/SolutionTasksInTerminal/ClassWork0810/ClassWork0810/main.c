// Copyright 2021 by Katerina

#include <stdio.h>

#define SIZE 10

/*������ � �������� �������� ������� ��� ���������

���������� ������:
1. ��������� ��������� �������
2. ��������� ��������� �������
3. ����������� ���� ������� ������� ��� ��������:
   ����� ����� ���� ������ ��������� �������
   ����� ����� ��������� � ������� ���������
   ����� ����� ��������� � ������� ����������
   �������� �������� ������� �������
   ����� �������� ������� � �������� �� ���������������
   ���������� ������ (��)



*/

int main() {
	printf("Topic ARRAYS\n");
	/*
	// ����������� �������
	int massive[100] = { 0 };                               // ������ �� 100 ���������
	int mass_1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int mass_2[5];                                          // 5 ��������� ������

	// const int size = 10;
	// int mass_3[size];
	
	int mass_4[SIZE];

	// ������������ �������
	int size;
	printf("Input size of dinamic array:\n>");
	scanf_s("%d", &size);

	// �������������� ����
	// char FirstSymName = 'M';
	// int name = (int)firstSymName;
	

	// ���������� ������������� ��������
	float* mass;
	// malloc(size);
	// sizeof(float)  //���������� ������ ���� ������
	mass = (float*)malloc(size * sizeof(float));

	// �������� ���������� ��������
	int m1[10];
	int m2[SIZE];
	int m3[] = { 1, 2, 3, 4, 5 };

	// * - ���������, int* - ��������� �� ����� �����
	int* m4; // ��������� �� ������ �������������� �������

	int summ = 0, indx = 0, new_value = 0;

	printf("%f", mass[0]);     // ������ ������� ��������

	// �������� ������
	free(mass);
	*/

	int size;
	printf("Input size of dinamic array:\n> ");
	scanf_s("%d", &size);

	float* mass;
	// ��������� ������ ��� �����������q ������
	// malloc(size);
	// sizeof(float) ���������� ������ ���� ������
	mass = (float*)malloc(size * sizeof(float));

	int i;

	for (i = 0; i < size; i++) {
		mass[i] = i + 1;
	}

	for (i = 0; i < size; i++) {
		printf("%1.f", mass[i]);
	}

	float sum_even_el = 0.0, sum_even_indx = 0.0, sum_even_values = 0.0;

	for (i = 0; i < size; i++) {
		if ((i + 1) % 2 == 0) {
			sum_even_el = sum_even_el + mass[i];
		} else {
			sum_even_indx = sum_even_indx + mass[i];
		}
		if ((int)mass[i] % 2 == 0) {
			sum_even_values = sum_even_values + mass[i];
		}
	}

	printf("\nSum of even elements: %1.f", sum_even_el);
	printf("\nSum of elements with even index: %.1f", sum_even_indx);
	printf("\nSum of elements with even value: %.1f", sum_even_values);

	int indx;
	printf("\nInput index for replace:\n>");
	scanf_s("%d", &indx);

	float new_value;
	printf("Input new value:\n");
	scanf_s("%f", &new_value);

	mass[indx] = new_value;

	/*
	for (i = 0; i < size; i++) {
		if (i == indx) {
			mass[indx] = new_value;
		}
	}
	*/
	
	printf("Your array now: ");
	for (i = 0; i < size; i++); {
		printf("%1.f", mass[i]);
	}

	float finding_element;
	printf("\nInput elements for search and replace:\n> ");
	scanf_s("%f", &finding_element);

	for (i = 0; i < size; i++); {
		if (mass[i] = mass[i]);
	}

	printf("Your array now: ");
	for (i = 0; i < size; i++); {
		printf("%1.f", mass[i]);
	}
	
	/*
	i = 0;

	while (i < size) {
		mass[i] = i + 1;

		i++;  // �� �� ����� i = i + 1, i += 1, ++i;
	}
	*/

	// �������� ������
	free(mass);

	return 0;
}