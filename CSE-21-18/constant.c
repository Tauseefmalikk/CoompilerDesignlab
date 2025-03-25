#include <stdio.h>
#include <ctype.h>

int isIntegerConstant(const char *str) {
    if (str == NULL || *str == '\0') {
        return 0;
    }
    
    // If the first character is a '+' or '-', move to the next character
    if (*str == '+' || *str == '-') {
        str++;
    }

    while (*str != '\0') {
        if (isdigit(*str)==0) {
            return 0;  }
        str++;
    }
    return 1;  // Return 1 if the string is a valid integer constant
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isIntegerConstant(str)) {
        printf("\"%s\" is a valid integer constant.\n", str);
    } else {
        printf("\"%s\" is not a valid integer constant.\n", str);
    }

    return 0;
}