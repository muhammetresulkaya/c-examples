#include <stdio.h>

int main()
{
    int aCounter = 0;
    int bCounter = 0;
    int cCounter = 0;
    int dCounter = 0;
    int fCounter = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade = 0;

    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            aCounter++;
            break;
        case 'B':
        case 'b':
            bCounter++;
            break;
        case 'C':
        case 'c':
            cCounter++;
            break;
        case 'D':
        case 'd':
            dCounter++;
            break;
        case 'F':
        case 'f':
            fCounter++;
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            printf("Incorrect letter grade entered. Enter a new grade.\n");
        }
    }
    printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n", aCounter, bCounter, cCounter, dCounter, fCounter);
    return 0;
}