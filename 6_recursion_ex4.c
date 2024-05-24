//Make your own function.
#include<stdio.h>
int Pow(int n);
int main(){
    printf("Power is : %d",Pow(5));
    return 0;
}
//Recursive Function
int Pow(int n){
    if(n==1){
        return 1;
    }
    
    int powN= n*n;
    return powN;
}