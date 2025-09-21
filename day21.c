#include <stdio.h>
#include <math.h>
int main(){
    int num,Lastdigit,Firstdigit,digit,SwappedNum,middle;
    printf("enter a number:\n");
    scanf("%d",&num);
    Lastdigit=num%10;
    digit=(int)log10(num);
    Firstdigit=(int)(num/pow(10,digit));
    middle=(num%(int)pow(10,digit))/10;
   
    SwappedNum=Lastdigit*(int)pow(10,digit)+middle*10+Firstdigit;
    printf("swapped number is %d\n",SwappedNum);
    return 0;




}