#include <stdio.h>

int main() {
    int total = 0;
    int counter = 0;

    printf("Enter grade or -1 to quit: ");
    int grade;
    scanf("%d", &grade);

    while (grade != -1)
    {
        total += grade;
        counter++;

        printf("Enter grade or -1 to quit: ");
        scanf("%d", &grade);
    }
    if (counter != 0)
    {
        int average = total / counter;
        printf("Class average is %d\n", average);
    } else {
        printf("No grades were entered.\n");
    }

    return 0;
}