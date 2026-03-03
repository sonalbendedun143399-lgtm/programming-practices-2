#include <stdio.h>

// Function to calculate area using pointer
void areaOfCircle(float *r, float *area) {
    *area = 3.14159 * (*r) * (*r);
}

int main() {
    float radius, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Passing address of radius and area
    areaOfCircle(&radius, &area);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
