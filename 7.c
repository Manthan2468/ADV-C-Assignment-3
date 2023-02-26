#include <stdio.h>
int find(int *a);
int main(){
int n;
printf("Enter the number to find number is divisable by 6 :- ");
scanf("%d",&n);
find(&n);
return 0;
}
int find(int *a){
if(*a%6==0){
printf("This Number is Divisable by 6");
}else{

printf("This Number is not Divisable by 6");
}
}

