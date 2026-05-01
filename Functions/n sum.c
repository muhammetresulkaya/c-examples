#include <stdio.h>

int sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    int result = sum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);
    
    return 0;
}