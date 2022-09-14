#include <stdio.h>
int main()
{
    int n, i, arr[20];
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Display the array:");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
        
    }
    return 0;
}
