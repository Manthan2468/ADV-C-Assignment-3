#include <stdio.h>
int main(){
    int n;
    printf("Enter the Size of Array = ");
    scanf("%d",&n);
    int a[n],*p;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    p = a;
    printf("\n\nNormal Form = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",*p);
        p++;
    }
    p = &a[n-1];
    printf("\n\nReverse Form = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",*p);
        p--;
    }
    
    return 0;
}