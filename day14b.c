#include <stdio.h>
int main() {
    int n, i;
    long long product=1;
    int haseven=0;
    printf("enter a number (n):");
    scanf("%d",&n);
    for(i=2;i <=n;i+=2){
        product*=i;
        haseven=1;
    }
    if(haseven){
        printf("product of even number from 1 to %d is %lld\n",n,product);
    }
    else{
        printf("no even no in the range\n");
    }
}