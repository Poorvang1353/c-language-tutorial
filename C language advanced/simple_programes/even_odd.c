#include<stdio.h>
int main()
{
    int a;
    printf("enter the value: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("your number is even");
    }
    else
    {
        printf("your number is odd");
    }
    return 0;
    
}