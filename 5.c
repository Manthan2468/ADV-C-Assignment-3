#include <stdio.h>
void cal(float *a,float *b,float *c);
int main(){
int b,c,n;
float a;
printf("Enter the solve equation to press 1 else press 2 :- ");
scanf("%d",&n);
switch (n)
{
case 1:
    printf("You have enter the value of B :- ");
    scanf("%d",&b);
    printf("You have enter the value of C :- ");
    scanf("%d",&c);
    cal(&a,&b,&c);
    break;

default:
    break;
}
return 0;
}
void cal(float *a,float *b,float *c){
    *a=(*b + *c)*(*b - *c)/(*b * *c);
    printf("Answer is :- %.2f",*a);
}