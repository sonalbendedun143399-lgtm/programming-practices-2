#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Display lowercase string
    printf("Lowercase string: %s\n", str);

    return 0;
}
