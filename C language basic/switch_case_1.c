#include<stdio.h>
int main()
{
    int age; 

    printf("Enter your age :");
    scanf("%d",&age);
    switch (age)
    {
    case 5:
        printf("Your age is 5 yr");
        break;
    case 15:
        printf("Your age is 15 yr");
        break;
    case 25:
        printf("Your age is 25 yr");
        break;
    default:
        printf("Age is not 5,15 & 25");
        
    }
    return 0;
}