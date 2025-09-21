#include <stdio.h>
int main (){
    int num;
    printf("enter a number");
    scanf("%d",&num);
if(num%2==0 || num%3==0 || num%5==0){
    printf("%d is not a prime number\n",num);
}
else{
    printf("%d is a prime number\n",num);
    
}
    
}