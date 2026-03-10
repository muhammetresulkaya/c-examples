#include <stdio.h>
int main(){
    int a = 425, b = 34, temp;
    
    //Swapping values of a and b
    temp = a;
    a = b;
    b = temp;
    prntf("a = %d, b = %d\n", a, b);
    return 0;
}