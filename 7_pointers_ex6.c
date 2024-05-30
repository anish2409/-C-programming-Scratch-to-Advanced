//Write a program in c to print all the letters in english alphabet using pointer.
#include<stdio.h>
int main() {
    char alphabet[26];
    char *ptr;
    int i;

    // Initialize the alphabet array
    for (i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }

    // Set the pointer to the start of the array
    ptr = alphabet;

    // Print each letter using the pointer
    printf("Letters of the English alphabet:\n");
    for (i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }
    printf("\n");

    return 0;
}