#include <stdio.h>
int main()
{
  int element, position, n;
  int arr[100];
  printf("Enter the size of array:");
  scanf("%d", &n);
  printf("Enter %d elements in array:", n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Display array elements:");
  for (int i = 1; i <= n; i++)
  {
    printf(" %d", arr[i]);
  }
  printf("\ninsertion of array");
  printf("\nEnter the position number for insertion:");
  scanf("%d", &position);
  printf("Enter the element of %dth position for insertion:", position);
  scanf("%d", &element);
  for (int i = n; i >= position; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[position] = element;
  n += 1;
  for (int i = 1; i <= n; i++)
  {
    printf(" %d", arr[i]);
  }

  return 0;
}