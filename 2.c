#include <stdio.h>
int main(){
    int a[50], n;
    int *p;
    printf("Enter the total Store value in array :- ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int b;
    int c = 0;
    printf("Enter the Value to Find :- ");
    scanf("%d",&b);
    p = &b;
    for (int i = 0; i < n; i++)
    {
        if (*p == a[i])
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        printf("Yes , Your Element is in Array.");
    }else{
        printf("No , Your Element is not in Array.");
    }
    
}