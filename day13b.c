#include <stdio.h>
int main() {
    int n, i;
    printf("enter a number (n):");
    scanf("%d",&n);
    printf("enter number from 1 to %d:\n",n);
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
    printf("\n");
}