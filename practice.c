#include <stdio.h>
#define G 6.674e-11

double calculate_gravitational_force(double m1, double m2, double distance_of_separation);

int main() {
    double force,m1,m2,distance_of_separation;

   printf("Enter the mass m1");
    scanf("%lf", &m1);

    printf("Enter the mass m2");
    scanf("%lf", &m2);

    printf("Enter the distance of separation");
    scanf("%lf", &distance_of_separation);


    force = calculate_gravitational_force(m1, m2, distance_of_separation);

    printf("The gravitational force is %lf", force);

    return 0;
}

double calculate_gravitational_force(double m1, double m2, double distance_of_separation) {
    return G*((m1*m2)/(distance_of_separation*distance_of_separation));
}
