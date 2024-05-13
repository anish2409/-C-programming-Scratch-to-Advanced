//Write a program to check if a given number is Armstrong or not

#include<stdio.h>
int main(){
    int num, rem, sum = 0, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    n = num;
    while(n != 0) {
        rem = n % 10;   
        sum = sum + (rem * rem * rem);  
        n = n / 10;
        
    }
    if(sum == num){
        printf("%d is an Armstrong number :");
    }
    else{
        printf("%d is not an Armstrong number :");
    } 
    return 0;
    
    
    
}