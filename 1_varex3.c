//perimeter of rectangle
#include<stdio.h>

int main(){

    int a,b;
    printf("enter Length ");
    scanf("%d",&a);
    printf("enter Width");
    scanf("%d",&b);
    int per = 2*(a+b);
    printf(" perimeter of rectangle is : %d", per);
    return 0 ;

}