#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars;
    char *ptr;
    int i = 0;
    while (i < 3)
    {
        printf("Employee %d:how many characters have in your empid:\n", i + 1);
        scanf("%d", &chars);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your employee id:");
        scanf("%s", ptr);
        printf("Your employee id is %s\n", ptr);
        free(ptr);
        i++;
    }
    return 0;
}