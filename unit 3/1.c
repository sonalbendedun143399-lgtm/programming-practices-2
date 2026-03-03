
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore Swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Passing addresses of x and y
    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
