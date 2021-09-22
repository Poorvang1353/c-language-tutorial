#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\nenter first number: ");
    scanf("%d",&a);
    printf("\nenter second number: ");
     scanf("%d",&b);
    printf("\nenter third number: ");
     scanf("%d",&c);
    printf("\nenter fourth number: ");
     scanf("%d",&d);

     if(a<b && a<c && a<d)
     {
         printf("first number %d is minimum",a);
     }
     else if(b<a && b<c && b<d)
     {
         printf("seconnd number %d is minimum",b);
     }
     else if(c<a && c<b && c<d)
     {
         printf("third number %d is minimum",c);
     }
     else
     {
         printf("fourth number %d is minimim",d);
     }
     return 0;
     
}