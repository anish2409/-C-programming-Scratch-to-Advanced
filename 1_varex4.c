// Take a number(n) from user & output its cube(n*n*n)

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    int cube = n*n*n;
    printf("The Cube output is %d" , cube);
}