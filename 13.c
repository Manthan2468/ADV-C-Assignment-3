#include <stdio.h>
int main(){
    int fact = 1 , n;
    int *p;
    printf("Enter the Number :- ");
    scanf("%d",&n);
    p = &n;
    for (int i = 1; i <= *p ; i++)
    {
        fact = fact*i;
    }
    printf("The Factorial Number :- %d\n",fact);
    
}