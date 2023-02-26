#include <stdio.h>
int find(int *a);
int main(){
int n;
printf("Ente rthe number to find number is even or odd :- ");
scanf("%d",&n);
find(&n);
return 0;
}
int find(int *a){
if(*a%2==0){
printf("%d is Even Number",*a);
}else{
printf("%d is Odd Number",*a);
}
}