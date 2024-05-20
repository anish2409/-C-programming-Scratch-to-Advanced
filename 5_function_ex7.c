//Write a function to find the squre root of a number.
#include<stdio.h>
#include<math.h>

int main(){
    double n;
    printf("Enter any positive real number: ");
    scanf("%lf", &n);

    double squre_root=sqrt(n);
    printf("\nThe square root of %.2lf is : % .2lf\n", n, squre_root);
    
    return 0;
}