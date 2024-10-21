// program to calculate the area of a circle using c functions
#include <stdio.h>
#define pi 3.142
float calculate_area(float radius)
{
    return pi*radius*radius;
}

int main() {
    float radius,area;
    printf("enter the radius of the circle");
    scanf("%f",&radius);
printf("the area of the circle is;%.2\n area");

    return 0;
}
