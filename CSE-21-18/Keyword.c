#include <stdio.h>
#include <string.h>

// List of C keywords
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof",
    "static", "struct", "switch", "typedef", "union", "unsigned", "void",
    "volatile", "while"
};

// Function to check if the input is a keyword
int isKeyword(char *str) {
    int n = sizeof(keywords) / sizeof(keywords[0]);
    
    // Check for match with any keyword
    for (int i = 0; i < n; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;  // It's a keyword
        }
    }
    return 0;  // Not a keyword
}

// Main function
int main() {
    char str[50];  // Array to store user input
    printf("Enter a string to check if it's a valid C keyword: ");
    scanf("%s", str);

    // Display rules before checking
    printf("\nRules for a valid C keyword:\n");
    printf("1. It must be a reserved C keyword.\n");
    printf("2. Keywords are case-sensitive.\n");
    printf("3. It cannot be used as an identifier.\n\n");

    // Check if the string is a valid keyword
    if (isKeyword(str)) {
        printf("'%s' is a valid C keyword.\n", str);
    } else {
        printf("'%s' is NOT a valid C keyword.\n", str);
    }

    return 0;
}
