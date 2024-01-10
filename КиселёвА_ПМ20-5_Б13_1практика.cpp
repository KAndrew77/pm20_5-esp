#include <stdio.h>

void cyclicShiftLeft(int arr[], int size, int shift) {
    int temp[shift];
    
    // Сохраняем первые shift элементов во временном массиве
    for (int i = 0; i < shift; ++i) {
        temp[i] = arr[i];
    }

    // Сдвигаем оставшиеся элементы влево на shift позиций
    for (int i = 0; i < size - shift; ++i) {
        arr[i] = arr[i + shift];
    }

    // Восстанавливаем элементы из временного массива в конец
    for (int i = size - shift, j = 0; i < size; ++i, ++j) {
        arr[i] = temp[j];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift = 2;

    cyclicShiftLeft(arr, size, shift);

    // Выводим результат
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}