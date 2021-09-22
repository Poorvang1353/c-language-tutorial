#include<stdio.h>
int main()
{
 int  a,n; 
 double fact=1;
    printf("enter any number :");
    scanf("%d",&a);
    for(n=1;n<=a;++n)
    {
        fact=fact*n;
    }
    printf("factorial of %d is: %f",a,fact);
    return 0;
}