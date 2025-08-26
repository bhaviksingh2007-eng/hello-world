#include <stdio.h>
int main() {
    int a, b, c;

    // Taking input
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking largest number  
    if (a > b && a > c) {
        printf("The largest number is: %d\n", a);
    }
    else if (b > a && b > c) {
        printf("The largest number is: %d\n", b);
    }
    else {
        printf("The largest number is: %d\n", c);
    }

    return 0;
}