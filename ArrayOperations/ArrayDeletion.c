#include <stdio.h>

int main()
{
    int index;
    int arr[100];
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\nDeletion  of array element");
    printf("\nEnter the index number for deletion:");
    scanf("%d", &index);
    for (int i = index; i <= n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n -= 1;
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}