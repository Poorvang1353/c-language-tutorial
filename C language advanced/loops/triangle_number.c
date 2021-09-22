#include<stdio.h>
int main()
{
    int i,j,num,n;
    num=5;
    n=num;
    while(n>0)
    {
        for(i=n;i>=1;i--) 
         printf("%d ",i);
         n=n-1;
         printf("\n");
        for(j=num-n;j>0;j--)    
         printf(" ");
    }
    return 0;
}