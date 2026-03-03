#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input string
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    // Copy string using strcpy
    strcpy(str2, str1);

    // Display copied string
    printf("Copied string: %s\n", str2);

    return 0;
}
