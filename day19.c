#include <stdio.h>
int main (){
    int a,b,c,d,temp,hcf,lcm;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    c=a;
    d=b;
    while(b !=0){
        temp=b;
        b=a%b;
        a=temp;
    
    }
    hcf=a;
    lcm=(c*d)/hcf;
    printf("hcf is %d\n",hcf);
    printf("lcm is %d\n",lcm);

}