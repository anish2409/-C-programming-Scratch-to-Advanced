//Write a program to print the average of 3 numbers

#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    float avg = (float)(num1 + num2 + num3)/3;  
    printf("\nThe average of %d, %d and %d is %.2f.",num1,num2,num3,avg);    
     return 0;
}


