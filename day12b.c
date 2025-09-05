#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if(days <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if(days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if(days <= 10) {
        fine = days * 3;
        printf("Fine = ₹%d\n", fine);
    }
    else if(days <= 30) {
        fine = days * 5;
        printf("Fine = ₹%d\n", fine);
    }
    else {
        printf("Membership cancelled due to excessive delay!\n");
    }

    return 0;
}