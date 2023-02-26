#include <stdio.h>
int main(){
    int empid;
    char gender[50];
    float salary;
    printf("Enter Empid :- ");
    scanf("%d",&empid);
    printf("\nEnter Gender  :- ");
    scanf("%s",&gender);
    printf("\nEnter Salary :- ");
    scanf("%f",&salary);
    void *p;
    p=&empid;
    printf("Your id :- %d",*((int*)p));
    p=&gender;
    printf("\nYour Gender :- %c",*((char*)p));
    p=&salary;
    printf("\nYour salary :- %f",*((float*)p));
    return 0;
}