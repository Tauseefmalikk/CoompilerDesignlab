#include <stdio.h>

int main() {
    char ch, new_string[100];
    int spaces = 0, lines = 0, tab=0,j=0;

    printf("Enter text\n");

    // Read characters one by one until #
    while ((ch = getchar()) != '#') {
        // Count spaces
        if (ch == ' ') {
            ch=';';
			spaces++;
        }
        
        // Count newlines
        if (ch == '\n') {
            ch='"';
			lines++;
        }
        if (ch== '\t'){
        	ch='#';
			tab++;
        	
		}
		new_string[j++]=ch;
    }
    new_string[j]='\0';
    // Print the results
    printf("\nNumber of blank spaces: %d\n", spaces);
    printf("Number of lines: %d\n", lines);
	printf("Number of tabs: %d\n", tab);
    printf("Altered string:\n");
    puts(new_string);
    return 0;
}