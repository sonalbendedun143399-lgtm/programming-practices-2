#include <stdio.h>
#include <stdlib.h>

// Function to check prime
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, i;
    int *arr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of prime numbers
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}
