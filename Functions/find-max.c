#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int dizi[] = {3, 7, 2, 9, 5};
    int size = 5;

    int sonuc = findMax(dizi, size);
    printf("En buyuk sayi: %d\n", sonuc);

    return 0;
}