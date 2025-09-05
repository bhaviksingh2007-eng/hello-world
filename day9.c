#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c, discriminant, root1, root2;
    printf("enter the coefficents a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if(discriminant>0){
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("roots are real and different\n");
        printf("root1 = %.2f, root2 = %.2f\n",root1,root2);}
    else if(discriminant==0){
        root1=root2 = -b/2*a;
        printf("roots are real and same\n");
        printf("root1 = root2 = %.2f\n",root1); 
    }
    else{
        printf("roots are complex and different\n");
    }
    return 0;
}
