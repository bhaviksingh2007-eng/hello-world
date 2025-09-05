#include <stdio.h>
int main() {
    int num, reverse=0,remainder;
    printf("enter a number:");
    scanf("%d",&num);
    int original=num;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    printf("reverse of %d is %d\n",original,reverse);
    
}