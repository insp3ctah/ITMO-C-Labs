#include <stdio.h>
#include "lab_11.h"

int main() {
    float x, y, radius;

    printf("Enter the coordinates of the center of the circle (x y): ");
    scanf("%f %f", &x, &y);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    struct Circle circle = create_circle(x, y, radius);

    float area = calculate_area(circle);
    float perimeter = calculate_perimeter(circle);

    printf("Circle with center at (%.2f, %.2f) and radius %.2f\n", circle.x, circle.y, circle.radius);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}