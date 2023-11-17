#include<stdio.h>

void main(){
    char a;
    printf("give me a character:  ");
    scanf("%c", &a);
    printf("your character is: %d and the next char is %c", a,a+1);
}