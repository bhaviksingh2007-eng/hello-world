#include <stdio.h>
int main () {
    int a,b,c;
    printf("enter the sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("triangle is equialteral\n");
    }
    else if(a==b || b==c || c==a){
        printf("triangle is isosceles\n");
    }
    else{
        printf("triangle is scalene \n");
    }
}
