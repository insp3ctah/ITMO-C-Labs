#include "lab_11.h"
#include <math.h>

float calculate_area(struct Circle c) {
    return M_PI * c.radius * c.radius;
}

float calculate_perimeter(struct Circle c) {
    return 2 * M_PI * c.radius;
}

struct Circle create_circle(float x, float y, float radius) {
    struct Circle c;
    c.x = x;
    c.y = y;
    c.radius = radius;
    return c;
}