#ifndef GEOMETRY_H
#define GEOMETRY_H

struct Circle {
    float x; // x-coordinate of the center
    float y; // y-coordinate of the center
    float radius;
};

float calculate_area(struct Circle c);
float calculate_perimeter(struct Circle c);
struct Circle create_circle(float x, float y, float radius);

#endif