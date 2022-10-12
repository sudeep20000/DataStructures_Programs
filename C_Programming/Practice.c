#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// void print(char name[], int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         printf("The character at %d position is %c\n", i, name[i]);
//     }
// }

void print(char *p, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("The character at %d position is %c\n", i, p[i]);
    }
}

int *TakeInput(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number at index no %d:", i);
        scanf("%d", (ptr + i));
    }
    return ptr;
}

int main()
{
    // int N;
    // printf("Enter the length of the string:");
    // scanf("%d", &N);
    // char name[N];
    // printf("Enter your name using %d characters:", N);
    // // scanf("%s", &name);
    // getchar();
    // gets(name);
    // // printf("The name is : %s", name);
    // puts(name);

    // int a, b;
    // printf("Enter two numbers :");
    // scanf("%d%d", &a, &b);
    // int total = sum(a, b);
    // printf("The sum of two number is:%d", total);

    // int a, b;
    // printf("Enter two numbers :");
    // scanf("%d%d", &a, &b);
    // printf("Before the swap value of a = %d and b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After the swap value of a = %d and b = %d\n", a, b);

    // int N;
    // printf("Enter the length of the string:");
    // scanf("%d", &N);
    // char name[N];
    // printf("Enter your name using %d characters:", N);
    // // scanf("%s", &name);
    // getchar();
    // gets(name);
    // // printf("The name is : %s", name);
    // // puts(name);
    // print(name, N);

    // int n;
    // printf("Enter the size of array:");
    // scanf("%d", &n);
    // int *ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the number at index no %d:", i);
    //     scanf("%d", (ptr + i));
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The number at index number %d is:%d\n", i, *(ptr + i));
    // }

    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    ptr = TakeInput(ptr, n);
    for (int i = 0; i < n; i++)
    {
        printf("The number at index number %d is:%d\n", i, *(ptr + i));
    }
    free(ptr);
    return 0;
}