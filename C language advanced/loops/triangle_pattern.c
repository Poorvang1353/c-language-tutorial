#include<stdio.h>
int main()
{
    int a,j,num,n;
    num=5;
    n=num;
    while(n>0)
    {
        for(a=n;a>=1;a--)
         printf("* ");
         n=n-1;
         printf("\n");
        for(j=num-n;j>0;j--)
         printf(" ");
    }
    return 0;
}