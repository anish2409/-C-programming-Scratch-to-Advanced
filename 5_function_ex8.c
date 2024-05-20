//Write a function to print "Hot" or "Cold" depends on the temparature user enters.
#include<stdio.h>
void Hot();
void cold();

int main(){
    printf("Enter temparature: ");
    float t;
    scanf("%f", &t);
    
    if(t>40){
        Hot();
    }
    else if (t<20){
        cold();
    }
    else{
        printf("Normal\n");
    }
    return 0;
}
void Hot(){
    printf("Hot\n");
}
void cold(){
    printf("cold\n");    
    }
