#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline

    // Copy first string to result
    strcpy(result, str1);

    // Concatenate second string to result
    strcat(result, str2);

    // Display concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}
