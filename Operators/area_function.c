#include <stdio.h>

const double PI = 3.14159;

double calculate_area(double radius) {
    return PI * radius * radius;
}

int main() {
 
    printf("Enter the radius of the circle: ");
    double radius;
    scanf("%lf", &radius);
    double area = calculate_area(radius);
    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}