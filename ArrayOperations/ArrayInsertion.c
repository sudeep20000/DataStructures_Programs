#include <stdio.h>
int main()
{
    int element;
    int index;
    int arr[100];
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array:", n);
    // while (n == 1)
    // {
    //     printf("your only option to insert the element is index %d", arr[n]);
    // }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display array elements:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\ninsertion of array");
    printf("\nEnter the index number for insertion:");
    scanf("%d", &index);
    printf("\nEnter the the element of index for insertion:");
    scanf("%d", &element);
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    n += 1;
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}