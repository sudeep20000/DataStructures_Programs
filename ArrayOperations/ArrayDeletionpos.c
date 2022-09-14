#include <stdio.h>
int main()
{
    int pos;
    int arr[100];
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array:", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display array elements:\n");
    for (int i = 1; i <= n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\nDeletion  of array element");
    printf("\nEnter the position number for deletion:");
    scanf("%d", &pos);
    for (int i = pos; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n -= 1;
    printf("After deletion the array looks like\n");
    for (int i = 1; i <= n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}