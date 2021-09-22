#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for starPattern and 1 for reversestarPattern: ");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;
    case 1:
        reversestarPattern(rows);
    default:
        printf("You have entered invalid choise");
        break;
    }
    return 0;
}