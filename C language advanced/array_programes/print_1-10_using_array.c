#include <stdio.h>
int main()
{
    int num[14], i, number;

    printf("Enter number you want in array: ");
    scanf("%d", &number);

    printf("Enter %d elements of an array \n", number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Elements in this arrray are : \n");
    for (int i = 0; i < number; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}