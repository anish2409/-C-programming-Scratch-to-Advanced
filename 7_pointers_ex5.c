//Write a program in C to print the elements of an array in reverse order.
#include <stdio.h>

int main() {
    int n, i;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    int *ptr = array;

    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Print the elements in reverse order using a pointer
    printf("Elements of the array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
