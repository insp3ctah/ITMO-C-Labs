#include <stdio.h>
#include <math.h>

enum Forms{
    LLC,//0
    JSC,//1
    SoleProprietary//2
};

struct Triangle {
    double first_side, second_side, third_side;
};

double perimeter(struct Triangle t) {
    return t.first_side + t.second_side + t.third_side;
}

double area(struct Triangle t) {
    double s = (t.first_side + t.second_side + t.third_side) / 2.0;
    return sqrt(s * (s - t.first_side) * (s - t.second_side) * (s - t.third_side));
}

union bit_field{
    unsigned int value;
    struct {
        unsigned int ready : 1;
        unsigned int few_toner : 1;
        unsigned int drum_broken : 1;
        unsigned int no_paper : 1;
    };
};


int main(){
    enum Forms form;
    form = LLC;
    printf("%d\n", form);

    struct Triangle t = {3.0, 4.0, 5.0};
    printf("Triangle sides: %.1f, %.1f, %.1f\n", t.first_side, t.second_side, t.third_side);
    printf("Perimeter: %.1f\n", perimeter(t));
    printf("Area: %.1f\n", area(t));

    union bit_field state;
    scanf("%x", &state.value);
    
    printf("Ready: %s\n", state.ready ? "Ready" : "Not Ready");
    printf("few toner: %s\n", state.few_toner ? "few" : "a lot");
    printf("drum broken: %s\n", state.drum_broken ? "drum broken" : "not broken");
    printf("no paper: %s\n", state.no_paper ? "no paper:" : "some paper");

}