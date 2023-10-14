#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
    double alpha;
    printf("Enter alpha in degrees: ");
    scanf("%lf", &alpha);

    double radians = alpha * (M_PI / 180.0);

    double first_result = 0;
    double second_result = 0;

    first_result = (sin(2 * radians) + sin(5 * radians) - sin(3 * radians)) /
                   (cos(radians) + 1 - 2 * sin(2 * radians) * sin(2 * radians));

    printf("First result: %lf\n", first_result);

    second_result = 2 * sin(radians);
    printf("Second result: %lf\n", second_result);

    return 0;
}