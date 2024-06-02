//Write a program to insert an element at the end of an array.
#include <stdio.h>

int main() {
    int array[100];  // Declare an array with a maximum size of 100
    int n, i, element;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Prompt user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // Prompt user for the element to be inserted
    printf("Enter the element to be inserted at the end: ");
    scanf("%d", &element);

    // Insert the element at the end of the array
    array[n] = element;
    n++;  // Increase the number of elements by 1

    // Print the updated array
    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
