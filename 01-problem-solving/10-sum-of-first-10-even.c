#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (i * 2);
    }
    printf("Sum of first 10 even numbers: %d", sum);
    return 0;
}