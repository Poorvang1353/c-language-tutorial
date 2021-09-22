#include<stdio.h>
int main()
{
    int a,b,c,d,e,i;
    printf("enter any number: ");
    scanf("%d",&a);
    e=a;
    while(a!=0)
    {
        b=1;
        c=a%10;
        for(i=1;i<=c;i++)
        {
            b=b*i;
        }
        d=d+b;
        a=a/10;
    }
    if(d==e)
    
        printf("The number is krishnamurty number");
        
    else
    
        printf("The number is not krishnamuty number");
    
    return 0;
    
}