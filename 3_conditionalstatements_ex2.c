//write a program to give grades to a student
/*
marks<30 is C
30<=marks <70 is B
70<=marks<90 is A
90<=marks<=100 is A+
*/
#include<stdio.h>

int main(){
    int marks;
    printf("Enter Number(0-100) :");
    scanf("%d",&marks);
    
    if(marks<30){
        printf("Grade C \n");
    }
    else if (marks>=30 && marks<70){
        printf("Grade B\n");
    }
    else if (marks>=70 && marks<90){
        printf("Grade A\n");
    }
    else {
        printf("Grade A+\n");
    }
    
    //(marks<=30)?printf("Fail"):printf("Pass");
    return 0;
}