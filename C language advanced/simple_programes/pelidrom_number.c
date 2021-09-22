#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("enter any number: ");
    scanf("%d",&l);
    i=l/100;
    j=l%100/10;
    k=l%10;
    m=i+j*10+k*100;

    if(l==m)
    {
        printf("\n%d is a pelidrom number",m);
    }
    else
    {
        printf("\n%d is a not pelidrom number",m);
    }
    return 0;
    
}