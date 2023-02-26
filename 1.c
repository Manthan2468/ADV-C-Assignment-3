#include <stdio.h>
int main()
{
    int a[50], n;
    int *p;
    printf("Enter the total Store value in array :- ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for (int i = 1; i <= n; i++)
    {
        // minimum mate
        if (a[i] < *p)
        {
            *p=a[i];
        }
        // maximum mate 
        // if (a[i] > *p){
            // *p=a[i];}
        
    }
    
    printf("The smallest is :- %d",*p);
    
    return 0;
}