#include <stdio.h>

int main()
{

    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("* ");
    }
    printf("\n");

    return 0;
}

// Square of asterisks
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// Right triangle of asterisks
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// Inverted right triangle of asterisks
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
