#include <stdio.h>
int main(){
    const PI=3.14;
    float r,a,a3,a4;
    float *a1,*a2;
    printf("Enter the Radius :- ");
    scanf("%f",&r);
    printf("Enter the Side value :- ");
    scanf("%f",&a);
    a3=PI*r*r;
    a4=a*a;
    a1=&a3;
    a2=&a4;
    printf("The Area of circle :- %d\n",*a1);
    printf("The Area of aquare :- %d\n",*a2);
    return 0;
}