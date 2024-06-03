// Check if a given charecter is present in a string or not
#include <stdio.h>
#include <stdbool.h>

bool is_character_present(char character, const char* string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == character) {
            return true;
        }
    }
    return false;
}

int main() {
    char character = 'a';
    const char* string = "hello world";

    if (is_character_present(character, string)) {
        printf("Character '%c' is present in the string \"%s\".\n", character, string);
    } else {
        printf("Character '%c' is not present in the string \"%s\".\n", character, string);
    }

    return 0;
}
