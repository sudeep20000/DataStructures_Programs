#include <stdio.h>
int main()
{
  int n, element, i;
  int arr[50];
  printf("Enter the size of array:");
  scanf("%d", &n);
  printf("Enter the %d array elements:", n);
  for (int i = 0; i < n; i++)
  {
    scanf("\n%d", &arr[i]);
  }
  printf("The array is:");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\nEnter the element you want to search:");
  scanf("%d", &element);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == element)
    {
      printf("The element %d is found in index %d", element, i);
      goto end;
    }
  }
  printf("The entered element %d is not found in array", element);
end:
  return 0;
}