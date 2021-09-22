#include<stdio.h>
int main()
{
    int no,i;
    printf("\nEnter Number to check whether its prime or not: ");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            printf("\n%d is not a prime number",no);
            break;
        }
    }
    if(no==i)
    {
        printf("\n%d is a prime number",no);
    }
    return 0;
}