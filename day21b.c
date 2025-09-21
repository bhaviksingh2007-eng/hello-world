#include <stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter a number:\n");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    if(num%i==0){
        sum+=i;

    }
}
if(sum==num && num!=0){
    printf("%d is a perfect number\n",num);
}
else{
    printf("%d is not a perfect number\n",num);
}
}
