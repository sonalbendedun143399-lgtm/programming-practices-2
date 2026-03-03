#include <stdio.h>
#include <ctype.h>  // For toupper()

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    // Display uppercase string
    printf("Uppercase string: %s\n", str);

    return 0;
}
