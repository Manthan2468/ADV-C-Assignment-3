#include <stdio.h>
int main(){
    float a,b,c,d,e,*m1,*m2,*m3,*m4,*m5;
    int n;
    printf("Enter the First Value = ");
    scanf("%f",&a);
    printf("Enter the Second Value = ");
    scanf("%f",&b);
    printf("Enter the Third Value = ");
    scanf("%f",&c);
    printf("Enter the Fourth Value = ");
    scanf("%f",&d);
    printf("Enter the Fifth Value = ");
    scanf("%f",&e);
    m1 = &a;
    m2 = &b;
    m3 = &c;
    m4 = &d;
    m5 = &e;
    printf("Adition to Enter 1 and Substraction to Enter 2 :- ");
    scanf("%d",&n);
    
    switch (n)
    {
    case 1:
        printf("Adition :- %.2f",*m1 + *m2 + *m3 + *m4 + *m5);
        break;
    case 2:
        printf("Substraction :- %.2f",*m1 - *m2 - *m3 - *m4 - *m5);
        break;
    
    default:
        break;
    }
}