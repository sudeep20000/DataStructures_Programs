#include <stdio.h>
int main()
{
    int n, arr[50], element;
    int high, low, mid;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the %d elements in array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search:");
    scanf("%d", &element);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            printf("the element %d found in index number %d ", element, mid);
            goto end;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("The element %d is not found in array!!!!", element);
end:
    return 0;
}