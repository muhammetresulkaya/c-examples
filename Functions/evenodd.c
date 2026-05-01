#include <stdio.h>


// write a function that checks if a number is even or odd
    
int isEven(int num) {
    return num % 2 == 0; // returns 1 if even, 0 if odd
}


int main() {
    int num = 5;
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}