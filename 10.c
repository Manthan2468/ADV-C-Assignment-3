#include <stdio.h>
void in(int *p);
void de(int *p1);
int main()
{
    int n;
    printf("Enter the Number :- ");
    scanf("%d",&n);
    in(&n);
    de(&n);
    return 0;
}
void in(int *p){
    printf("Initial Value :- %d\n",*p);
    (*p)++;
    printf("Increment Value :- %d\n",*p);
}
void de(int *p1){
    printf("Initial Value :- %d\n",*p1);
    (*p1)--;
    printf("Decrement Value :- %d\n",*p1);
}



