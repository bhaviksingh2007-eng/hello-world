#include <stdio.h>
int main() {
    int n, i , sum=0;
    printf("enter a number (n)):");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=(2*i-1);
    }
printf("sum of first %d odd natural number is %d\n",n,sum);
}