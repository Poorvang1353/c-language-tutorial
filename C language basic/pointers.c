#include <stdio.h>
int main()
{
    int a;
    int *ptr = &a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("The address of a is : %p\n", &ptr);
    printf("The address of a is : %p\n", &a);
    printf("The address of a is : %p\n", ptr);
    printf("The value of a is : %d\n", *ptr);
    printf("The value of a is : %d\n", a);

    return 0;
}