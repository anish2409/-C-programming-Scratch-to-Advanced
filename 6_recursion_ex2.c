//Factorial of n.
#include<stdio.h>
int fact(int n);
int main(){
    printf("Factorial si : %d",fact(5));
    return 0;
}
//Recursive Function
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1= fact(n-1);//fact of 1 to n
    int factN= factNm1*n;
    return factN;
}