#include <stdio.h>

int main() {
    int x[] = {2, 3, -1, 4, 5}; // Пример массива x
    int m = -1; // Инициализируем m значением, указывающим на отсутствие отрицательных элементов
    int size = sizeof(x) / sizeof(x[0]);
    int y = 0;

    // Находим индекс первого отрицательного элемента (если есть)
    for (int i = 0; i < size; ++i) {
        if (x[i] < 0) {
            m = i;
            break;
        }
    }

    // Вычисляем значение y
    for (int i = 0; i <= m || m == -1; ++i) {
        int product = 1;
        for (int j = 0; j <= i; ++j) {
            product *= x[j];
        }
        y += product;
    }

    // Выводим результат
    printf("y = %d\n", y);

    return 0;
}