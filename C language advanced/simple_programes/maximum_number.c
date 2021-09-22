#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("\nenter second number: ");
    scanf("%d",&b);
    printf("\nenter third number: ");
    scanf("%d",&c);

   if(a>b && a>c)
   {
       printf("\nfirst number %d is maximum",a);
   }
   else if(b>a && b>c)
   {
       printf("\nsecond number %d is maximum",b);
   }
   else
   {
       printf("\nthird number %d is maximum",c);
   }
   return 0;
}