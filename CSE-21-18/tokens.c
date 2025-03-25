#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], delimiters[50];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = 0;
    
    // Input delimiters
    printf("Enter delimiters (e.g., space, comma, period): ");
    fgets(delimiters, sizeof(delimiters), stdin);
    
    // Remove trailing newline from delimiters
    delimiters[strcspn(delimiters, "\n")] = 0;

    // Tokenize the string
    char *token = strtok(str, delimiters);
    
    // Display tokens
    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);
    }
    
    return 0;
}
