#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Using malloc
    int *p;
    int n;
    printf("Enter the number of element you want:\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of the %d element is\n", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of the %d element is:%d\n", i, p[i]);
    }

    // Using calloc
    int *p;
    int n;
    printf("Enter the number of element you want:\n");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of the %d element is\n", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of the %d element is:%d\n", i, p[i]);
    }

    // Using realloc
    int *p;
    int n;
    printf("Enter the size of new array of element you want:\n");
    scanf("%d", &n);
    p = (int *)realloc(p, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter new value of the %d element is\n", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value of the %d element is:%d\n", i, p[i]);
    }
    free(p);
    return 0;
}