#include <stdio.h>

int main() {
    int total = 0;
    int counter = 0;

    while (counter < 10)
    {
        int grade;
        printf("Enter grade: ");
        scanf("%d", &grade);
        total += grade;
        counter++;
    }
    int average = total / counter;
    printf("Class average is %d\n", average);
}



#include <stdio.h>

int main() {
    int total = 0;

    for (int counter = 0; counter < 10; counter++) {
        int grade;
        printf("Enter grade: ");
        scanf("%d", &grade);
        total += grade;
    }
    int average = total / 10;
    printf("Class average is %d\n", average);
}
