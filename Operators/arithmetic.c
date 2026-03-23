#include <stdio.h>

int main()
{
    int a = 34, b = 25, res;

    res = a + b;
    printf("a + b is %d\n", res);

    res = a - b;
    printf("a - b is %d\n", res);

    res = a * b;
    printf("a * b is %d\n", res);

    res = a / b;
    printf("a / b is %d\n", res);

    res = a % b;
    printf("a %% b is %d\n", res);
    return 0;
}