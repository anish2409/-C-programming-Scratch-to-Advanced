//Write a program to check if a number is prime or not.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    /*A prime number must be greater than 1*/   
    if(n <= 1) {
        printf("%d is not a prime number.", n);
    } else{
        for(i = 2; i < n; ++i){
            if(n % i == 0){ 
                printf("%d is not a prime number.\n", n);
                break;
            }
        }
        
        if(i == n){
            printf("%d is a prime number.\n", n);
        }
    }
    return 0;
}