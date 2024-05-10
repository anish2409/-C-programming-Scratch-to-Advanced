// Write a program to check if a student passed or failed
/*
marks>30 is pass
marks<=30 is fail
*/

#include<stdio.h>

int main(){
    int marks;
    printf("Enter Number(0-100) :");
    scanf("%d",&marks);
    /*
    if(marks<=30){
        printf("Fail \n");
    }
    else{
        printf("Pass\n");
    }
    */
    (marks<=30)?printf("Fail"):printf("Pass");
    return 0;
}