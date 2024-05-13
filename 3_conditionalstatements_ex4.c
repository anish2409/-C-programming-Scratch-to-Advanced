// Write a Program to find if a character entered by user is upper case or not.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch>='A' && ch <= 'Z'){
        printf("\nThe character is Upper Case.");
    
    }
    else if (ch>='a' && ch <= 'z')
    {
        printf("\nThe character is Lower Case.");
    }
    else{
        printf("\nThe character is neither Upper nor Lower Case.");
    }
    
}