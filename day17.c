#include <stdio.h>
#include <math.h>
int main() {
    int num,original,remainder,n=0;
    float result=0.0;
    printf("enter a number");
    scanf("%d",&num);
    original=num;
    int temp = num ; 
    while(temp!=0){
        n++;
        temp/=10;
    }
    temp=num;
    while(temp!=0){
        remainder=temp%10;
        result=result+pow(remainder,n);
        temp/=10;
    }
    if ((int)result==original){
        printf("%d is an armstrong number\n",original);
    }
    else{
        printf("%d is not an armstrong number\n",original);
    }
}   