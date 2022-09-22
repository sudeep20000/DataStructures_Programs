#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fev_char;
    char name[40];
} sudipta, bikash, gogla;

void print()
{
    printf("%d", bikash.id);
}

int main()
{
    sudipta.id = 1;
    bikash.id = 2;
    gogla.id = 3;

    sudipta.marks = 20;
    bikash.marks = 30;
    gogla.marks = 40;

    sudipta.fev_char = 's';
    bikash.fev_char = 'b';
    gogla.fev_char = 'g';
    strcpy(sudipta.name, "Sudipta chakraborty");
    // printf("Sudipta name is:%s",sudipta.name);
    print();
    return 0;
}