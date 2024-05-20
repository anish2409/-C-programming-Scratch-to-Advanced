//Write a function to find sum of digits of a numbers
#include<stdio.h>

int main() {
    int n,sum=0,rem;
    printf( "Enter the number: ");
    scanf("%d",&n);

    while(n!=0){
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    printf("Sum of Digits = %d\n",sum);
    return 0;
}