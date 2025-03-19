#include <stdio.h>
#include <math.h>

int calculate_triangle_area(int a, int b, int c, int s);


int main() {
    int area, a, b, c, s;
    

    printf("Enter the side length a:");
    scanf("%d", &a);

    printf("Enter the side lenghth b:");
    scanf("%d", &b);

    printf("Enter the side length c:");
    scanf("%d", &c);
    s = (a+b+c)/2;

    
    area = calculate_triangle_area(a,b,c,s);

    printf("The semi perimeter is %d\n",s);

    printf("The area of the triangle by heron formula is %d",area);
}

int calculate_triangle_area(int a, int b, int c, int s){
    return sqrt(s*(s-a)*(s-b)*(s-c));
}