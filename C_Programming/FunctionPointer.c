#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("\nHello User\n");
    printf("The sum of 5 and 6 is:%d", fptr(5, 6));
}

void greetGMAndExecute(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 5 and 6 is:%d", fptr(5, 6));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetGMAndExecute(ptr);
    greetHelloAndExecute(ptr);
    return 0;
}