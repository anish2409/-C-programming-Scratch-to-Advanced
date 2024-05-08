// Write  a program to check if the given character is digit or not

#include<stdio.h>

int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    /* Checking whether the entered character is digit or not */
    if(ch >= '0' && ch <= '9'){
        printf("\n%c is a digit.", ch);
    }else{
        printf("\n%c is not a digit.",ch);
        }
return 0;
}