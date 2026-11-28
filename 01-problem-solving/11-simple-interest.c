#include <stdio.h>

int main()

{

    float p, r, t, si;

    {
        printf("enter principal , rate and time:");
        scanf("%f %f %f", &p, &r, &t);

        si = (p * r * t) / 100;

        printf("simple intrest = %2f,", si);
    }

    return 0;
}