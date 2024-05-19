// Changes to parameters in function don't change the values in calling function.
#include<stdio.h>
void calculatePrice(float value);

int main() {
    float value = 100.0;
    calculatePrice(value);

    return 0;
}

void calculatePrice(float value){
    value=value+(0.18*value);
    printf("The final price is: %f",value);
}