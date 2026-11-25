
#include <stdio.h>
int main()
{
    float m1, m2, m3, total, average;

    printf("enter marks of thrree subjects:");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("total = %2f\n", total);
    printf("average = %f\n", average);

    return 0;
}
