// Write a program to print prime numbers in a range.
#include<stdio.h>
int isPrime(int n){
    for (int i=2;i*i <=n;i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}