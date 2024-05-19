//Use library functions to calculate the squre of a number given by user.
#include<stdio.h>
#include<math.h>
void calculatePrice(float value);

int main() {
    int n=4;
    printf("%f",pow(n,2));

    return 0;
}

void calculatePrice(float value){
    value=value+(0.18*value);
    printf("The final price is: %f",value);
}