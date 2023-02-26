#include <stdio.h>
int swap(int *p1,int *p2,int n);
int main(){
    int a[50],b[50],n;
    printf("Enter the Size of Array = ");
    scanf("%d",&n);
    printf("First Array :- \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of a[%d] = ",i);
        scanf(" %d ",&a[i]);
    }
    printf("\nSecond Array :- \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of b[%d] = ",i);
        scanf(" %d ",&b[i]);
    }
    printf("\nBefore Swap :- \n");
    printf("1 Array :- ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n2 Array :- ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",b[i]);
    }
    swap(a,b,n);
    printf("\nAfter Swap :- \n");
    printf("1 Array :- ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n2 Array :- ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",b[i]);
    }
    
    return 0;
}
int swap(int *p1,int *p2,int n){
for (int i = 0; i < n; i++)
{
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    p1++;
    p2++;
}

}