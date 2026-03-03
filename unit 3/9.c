#include <stdio.h>
#include <string.h>

int main() {
    char str[5][100];  // Array to store 5 strings
    char temp[100];
    int i, j;

    // Input 5 strings
    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        fgets(str[i], sizeof(str[i]), stdin);

        // Remove newline character if present
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    // Sort strings in ascending order using simple bubble sort
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Display sorted strings
    printf("\nStrings in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
