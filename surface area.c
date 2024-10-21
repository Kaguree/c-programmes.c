// program to calculate the surface area of a cylinder

#include <stdio.h>

int main() {
    int radius;
    int length;
    int diameter;
    double surface_area;
    double const pi= 3.142;
    
    printf("Enter the radius:");
    scanf("%d", &radius);
    
    printf("Enter the length:");
    scanf("%d", &length);
    
    printf("Enter the diameter:");
    scanf("%d", &diameter);
    
    surface_area=2*pi*radius*radius+pi*diameter*length;
    printf("The surface_area of the cylinder is %.2lf", surface_area);


    return 0;
}
