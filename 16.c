#include <stdio.h>
int main(){
    int *p,n,sum=0,a[100];
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    p = a;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("Sum of all Element = %d\n",sum);
    return 0;
    
}