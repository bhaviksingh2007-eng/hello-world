#include <stdio.h>
int main() {
    int percentage;
    printf("enter the percentage:");
    scanf("%d",&percentage);
    if(percentage>=90){
        printf("grade A\n");
    }
    else if(percentage>=80){
        printf("grade B\n");
    }
    else if (percentage>=70){
        printf("grade C\n");
    }
    else if(percentage>=60){
        printf("grade D\n");
    }
    else if(percentage>=40){
        printf("grade E\n");
    }
    else{
        printf("grade F\n");
    }
} 