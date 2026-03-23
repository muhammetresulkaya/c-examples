#include <stdio.h>

int main()
{
    int a = -1905, b = 34;

    if (a > 25 || b > 25)
    {
        printf("Any one of the given value is "
               "greater than 25\n");
    }
    else
    {
        printf("Both values are less than 25\n");
    }
    return 0;
}