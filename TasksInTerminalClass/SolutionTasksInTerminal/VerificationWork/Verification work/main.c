// Copyright 2021 by Katerina

#include <stdio.h>
#include <math.h>
#include <malloc.h>


int main() {

    // ... (1)
    int a, i, * mas, K, n;

    setlocale(0, "rus");

    printf("¬ведите нужный вас размер массива: ");
    scanf_s("%d", &i);

    mas = malloc(i * sizeof(int));

    printf("—лучайно сгенерировалс€ массив: ");

    for (a = 0; a < i; a++) {
        mas[a] = rand() % 100; // ранд от 0 до 100
        printf("%d ", mas[a]);
    }

    // ... (2)

    for (int i = 0; i < mas; i++) {
        int tmp = mas[n - 1];
        for (int j = n - 1; j > -1; j--) {
            mas[j] = mas[j - 1];
        }
        mas[0] = tmp;
    }

    printf('\n');
    free(mas);

    return 0;
}