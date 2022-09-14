#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void BubbleSort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working no pass number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void BubbleSortAdaptive(int *a, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int a[] = {1, 100, 5, 6, 4, 45, 2, 85};
    // int a[] = {12, 54, 65, 7, 23, 9};
    int a[] = {1, 2, 5, 45, 52, 55};
    int n = 6;
    printArray(a, n);
    // BubbleSort(a, n);
    BubbleSortAdaptive(a, n);
    printArray(a, n);
    return 0;
}