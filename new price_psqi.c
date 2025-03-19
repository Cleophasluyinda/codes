#include <stdio.h>
#define PI 3.14

double calculate_price_psqi(double diameter, double area, double cost,);

int main() {
    double diameter, area, cost, price_psqi,radius;

    printf("Enter the diameter:");
    scanf("%lf", &diameter);
    radius = diameter/2;

    printf("Enter the price of pizza:");
    scanf("%lf", &cost);

    price_psqi = calculate_price_psqi(diameter,area,cost);

    printf("The price per square inch of pizza is %lf");
    return 0;

}

double calculate_price_psqi(double diameter, double area, double cost) {
    return cost/area;
} 
