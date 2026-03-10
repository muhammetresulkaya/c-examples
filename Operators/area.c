#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    area = PI * radius * radius;
    printf("The area of the circle is: %.2lf\n", area);
    perimeter = 2 * PI * radius;
    printf("The perimeter of the circle is: %.2lf\n", perimeter);
    return 0;
}