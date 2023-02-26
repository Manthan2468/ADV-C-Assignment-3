#include <stdio.h>
void check(char *p);
int main(){
    char s;
    printf("Enter the Character :- ");
    scanf("%c",&s);
    check(&s);
    return 0;
}
void check(char *p){
if (*p == 'a' || *p == 'A' ||*p == 'e' || *p == 'E' ||*p == 'i' || *p == 'I' ||*p == 'o' || *p == 'O' ||*p == 'u' || *p == 'U' )
{
    printf("The char is Vowel.\n");
}else if(*p >= '0' && *p <= '9' ){
 printf("The char is Digit.\n");
}else{
     printf("The char is Constant.\n");
}

}