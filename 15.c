#include <stdio.h>
int main(){
    float a1,a2;
    float *p1,*p2;
    printf("Enter the First Number :- ");
    scanf("%f",&a1);
    printf("Enter the Second Number :- ");
    scanf("%f",&a2);
    p1 = &a1;
    p2 = &a2;
    printf("The Difference Between Two Float Pointers :- %.2f\n",*(p1)-*(p2));
    return 0;
}