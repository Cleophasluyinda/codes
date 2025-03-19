#include <stdio.h>
#define PI 3.164

int main() {
    double diameter;
    diameter = 4.1;
    double radius;
    radius = diameter/2;
    double cost;
    cost = 360.2;
    double area;
    area = PI*radius*radius;
    double price_psqi;
    price_psqi = cost/area;

    printf("The price per square inch is %lf", price_psqi);
    return 0;

}