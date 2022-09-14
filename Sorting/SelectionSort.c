#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionsort(int *a, int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}
int main()
{
    int a[] = {3, 5, 2, 13, 15};
    int n = 5;
    printArray(a, n);
    selectionsort(a, n);
    printArray(a, n);
    return 0;
}