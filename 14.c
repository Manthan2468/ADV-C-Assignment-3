#include <stdio.h>
int main(){
    int *p,a[50],n;
    printf("Enter the Size of Array :- ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    p = a;
    printf("Normal Order :- ");
    for (int i = 0; i < n ; i++)
    {
        printf(" %d ",*p);
        p++;
    }
    printf("\n");
    p = &a[n-1];
    printf("\nReverse Order :- ");
    for (int i = 0; i < n ; i++)
    {
        printf(" %d ",*p);
        p--;
    }
    
 return 0;   
}