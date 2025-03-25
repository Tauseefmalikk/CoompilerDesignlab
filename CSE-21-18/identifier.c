#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a string is a valid identifier
int isValidIdentifier(const char *str) {
    // An identifier cannot be empty
    if (str == NULL || strlen(str) == 0)
        return 0;

    // Check if the first character is a letter or an underscore
    if (isalpha(str[0])==0 && str[0] != '_')
        return 0;

    // Check the remaining characters
    int i;
    for (i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') // Must be alphanumeric or underscore
            return 0;
    }

    return 1; // All conditions satisfied
}

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a valid identifier
    if (isValidIdentifier(str)) {
        printf("\"%s\" is a valid identifier.\n", str);
    } else {
        printf("\"%s\" is not a valid identifier.\n", str);
    }

    return 0;
}