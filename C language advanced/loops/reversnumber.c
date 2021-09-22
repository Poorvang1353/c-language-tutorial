#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("enter valid number");
    }
     printf("the revers number of %d is ",a);
     while(a!=0)
     {
         printf("%d",a%10);
         a=a/10;
     }
      return 0;
}