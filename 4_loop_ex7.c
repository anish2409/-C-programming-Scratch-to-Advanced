//Calculate the sum of all Numbers between 5 and 500.(including 5 & 50)
#include<stdio.h>
int main() {
    int sum=0;
    

    for (int i = 5; i<=50; i++)
    {
        sum+=i;
    }

    printf("Sum is %d",sum);
    
    
    return 0;
}