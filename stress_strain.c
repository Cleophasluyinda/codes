#include <stdio.h>



double calculate_stress(double force, double area) {
    return force/area;
}

double calculate_strain(double original_length, double change_in_length) {
    return change_in_length/original_length;
}

int main() {
    double force,area,original_length,change_in_length;

    printf("Enter the force : ");
    scanf("%lf" , &force);

    printf("Enter the area : ");
    scanf("%lf", &area);

    printf("Enter the original length : ");
    scanf("%lf" , &original_length);

    printf("Enter the change in length : ");
    scanf("%lf" , &change_in_length);

    double stress = calculate_stress(force,area);
    double strain = calculate_strain(original_length, change_in_length);

    printf("Stress : %.2f\n" , stress);
    printf("Strain : %.2f\n" , strain);

    return 0;
}