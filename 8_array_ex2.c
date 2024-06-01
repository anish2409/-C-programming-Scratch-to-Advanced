//Write a program to print the largest number in an array.
#include <stdio.h>

int find_largest_number(int arr[], int size) {
    if (size == 0) {
        return -1; // Indicate an error if the array is empty
    }

    int largest = arr[0]; // Assume the first element is the largest for now
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a bigger number is found
        }
    }
    return largest;
}

int main() {
    int array[] = {10, 5, 3, 99, 56, 78, 23};
    int size = sizeof(array) / sizeof(array[0]);

    int largest_number = find_largest_number(array, size);
    if (largest_number != -1) {
        printf("The largest number in the array is: %d\n", largest_number);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}
