#include <stdio.h>
#include <math.h>
int main(){
int num, first, middle, last, swapped;
    printf("enter a number with 4 digits: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a 4-digit number.\n");
        return 1;
    }

    first = num / 1000;
    middle = (num % 1000) / 10;
    last = num % 10;

    swapped = last * 1000 + middle * 10 + first;
    printf("swapped number is %d\n", swapped);
}



