#include <stdio.h>

int findMax(int arr[], int length) {
    int max = arr[0]; // Assume the first element is the maximum
    for (int i = 1; i < length; i++) { // Loop through the array starting from the second element
        if (arr[i] > max) { // If the current element is greater than max
            max = arr[i]; // Update max
        }
    }
    return max; // Return the maximum value found
}

int main() {
    int arr[] = {3, 5, 2, 8, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = findMax(arr, length);
    printf("The maximum value in the array is: %d\n", result);
    return 0;
}

