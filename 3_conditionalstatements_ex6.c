/*
Write a program to check if the given number is a natural number.
(Natural numbers start from 1)
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>0){
        printf("The number is natural Number");
    }
    else{
        printf("The number is not a natural Number");
    }
    return 0;
}