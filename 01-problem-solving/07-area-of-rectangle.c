#include <stdio.h>
int main()
{
    float length, breadth, area;

    printf("enter length and breadth of rectangle:");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;

    printf("area of rectangle =%2f", area);

    return 0;
}