#include <math.h>
#include <stdio.h>

int main() {
    double result = sqrt(16.0); // Calculate the square root of 16
    printf("The square root of 16 is: %.2f\n", result);
    return 0;
}


// ceil and floor functions
#include <math.h>
#include <stdio.h>
int main() {
    double num = 3.7;
    printf("Ceil of %.2f is: %.2f\n", num, ceil(num)); // Round up
    printf("Floor of %.2f is: %.2f\n", num, floor(num)); // Round down
    return 0;
}

