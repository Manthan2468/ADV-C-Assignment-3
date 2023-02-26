#include <stdio.h>
int fun(int *p);
int main(){
int n;
printf("Enter the Number :- ");
scanf("%d",&n);
fun(&n);
return 0;
}
int fun(int *p){
    if (*p % 2 == 0 && *p != 0)
    {
        printf("The Number is Even.");
    }else if (*p % 2 != 0){
        printf("The Number is Odd.");
    }else{
        printf("The Number is Zero.");
    }
    
}