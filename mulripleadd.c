#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i < 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d",i);
            sum += i;
        }
    }

    printf("Sum of multiples of 3 and 5 below 1000 = %d\n", sum);

    return 0;
}
