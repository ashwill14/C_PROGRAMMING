
#include <stdio.h>

int main()
{
    int a = 10, b = 0;

    // 1. Syntax Error
    // Example: printf("Hello")
    // Missing semicolon causes a syntax error.

    // 2. Runtime Error
    
    printf("Runtime Error Example:\n");

    if (b != 0)
    {
        printf("Division = %d\n", a / b);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    // 3. Logical Error
    printf("\nLogical Error Example:\n");

    int x = 10, y = 5;
    int wrong = x - y; // Wrong operation
    int correct = x + y;

    printf("Wrong Result = %d\n", wrong);
    printf("Correct Result = %d\n", correct);

    return 0;
}
