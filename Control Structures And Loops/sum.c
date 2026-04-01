#include <stdio.h>

int main() {

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += i;
    }
    printf("The sum of the first 10 integers is: %d", sum);
    
    return 0;
}