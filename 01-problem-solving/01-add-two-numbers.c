// addition of two numbers.

#include <stdio.h>
int main(){

    int a ,b,sum;

    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("sum = %d\n",sum);

    return 0;
}



// for running the program, compile = gcc "01-problem-solving/01-add-two-numbers.c" -o add
// run = .\add.exe