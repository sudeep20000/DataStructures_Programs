#include <stdio.h>
#include <string.h>

struct drivers
{
    char name[20];
    char route[20];
    int kms;
    int license;
};

int main()
{
    struct drivers d1, d2, d3, d4;
    d1.kms = 20;
    d2.kms = 30;
    d3.kms = 40;
    d4.kms = 50;
    d1.license = 10;
    d2.license = 15;
    d3.license = 20;
    d4.license = 25;
    printf("1st driver details\n");
    strcpy(d1.name, "sudipta");
    printf("The name of the 1st driver is:%s\n", d1.name);
    strcpy(d1.route, "Gayeshpur");
    printf("The route of the 1st driver is:%s\n", d1.route);
    printf("The distence of the 1st driver is:%d\n", d1.kms);
    printf("The lincense no of the 1st driver is:%d\n", d1.license);
    printf("Thakn you!!\n");

    printf("2nd driver details\n");
    strcpy(d2.name, "subhra");
    printf("The name of the 2nd driver is:%s\n", d2.name);
    strcpy(d2.route, "Kalyani");
    printf("The route of the 2nd driver is:%s\n", d2.route);
    printf("The distence of the 2nd driver is:%d\n", d2.kms);
    printf("The lincense no of the 2nd driver is:%d\n", d2.license);
    printf("Thakn you!!\n");

    printf("3rd driver details\n");
    strcpy(d3.name, "tapas");
    printf("The name of the 3rd driver is:%s\n", d3.name);
    strcpy(d3.route, "madanpur");
    printf("The route of the 3rd driver is:%s\n", d3.route);
    printf("The distence of the 3rd driver is:%d\n", d3.kms);
    printf("The lincense no of the 3rd driver is:%d\n", d3.license);
    printf("Thakn you!!\n");

    printf("4th driver details\n");
    strcpy(d4.name, "bapan");
    printf("The name of the 4th driver is:%s\n", d4.name);
    strcpy(d4.route, "saguna");
    printf("The route of the 4th driver is:%s\n", d4.route);
    printf("The distence of the 4th driver is:%d\n", d4.kms);
    printf("The lincense no of the 4th driver is:%d\n", d4.license);
    printf("Thakn you!!\n");

    return 0;
}