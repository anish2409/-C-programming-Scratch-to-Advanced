

// Function to find the maximum between two numbers using pointers
#include<stdio.h>
int findMax(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main() {
    int num1, num2;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to find the maximum and store the result
    int max = findMax(&num1, &num2);

    // Print the result
    printf("The maximum number is: %d\n", max);

    return 0;
}
