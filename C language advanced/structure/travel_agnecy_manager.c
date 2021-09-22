#include <stdio.h>
struct driver
{
    char name[34];
    char dlno[34];
    char route[34];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;

    printf("Enter the details of the drivers\n");
    printf("Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of the first driver\n");
    scanf("%s", &d1.dlno);

    printf("Enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of the first driver\n");
    scanf("%d", &d1.kms);

    printf("Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of the second driver\n");
    scanf("%s", &d2.dlno);

    printf("Enter the route of the second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of the second driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the name of the thrid driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of the thrid driver\n");
    scanf("%s", &d3.dlno);

    printf("Enter the route of the thrid driver\n");
    scanf("%s", &d3.route);

    printf("Enter the kms of the thrid driver\n");
    scanf("%d", &d3.kms);

    printf("**************printing informtion of these drivers*********\n");
    printf("For driver No:1\nName is %s\n", d1.name);
    printf("Dl number is %s\n", d1.dlno);
    printf("route is %s\n", d1.route);
    printf("kms is %d\n", d1.kms);

    printf("For driver No:2\nName is %s\n", d2.name);
    printf("Dl number is %s\n", d2.dlno);
    printf("route is %s\n", d2.route);
    printf("kms is %d\n", d2.kms);

    printf("For driver No:3\nName is %s\n", d3.name);
    printf("Dl number is %s\n", d3.dlno);
    printf("route is %s\n", d3.route);
    printf("kms is %d\n", d3.kms);

    return 0;
}