#include <stdio.h>

// Function to find maximum
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find minimum
int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    int (*funcPtr)(int, int);   // Function pointer declaration

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Find Maximum
    funcPtr = findMax;          // Point to findMax function
    printf("Maximum: %d\n", funcPtr(x, y));

    // Find Minimum
    funcPtr = findMin;          // Point to findMin function
    printf("Minimum: %d\n", funcPtr(x, y));

    return 0;
}
