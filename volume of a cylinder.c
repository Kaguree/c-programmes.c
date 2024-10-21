// program to calculate the volume of a cylinder

#include <stdio.h>

int main() {
    int radius;
    int height;
    double volume;
    double const pi= 3.142;
    
    printf("Enter the radius:");
    scanf("%d", &radius);
    
    printf("Enter the height:");
    scanf("%d", &height);
    
    volume=2*pi*radius*radius*height;
    printf("The volume of the cylinder is %.2lf", volume);


    return 0;
}
