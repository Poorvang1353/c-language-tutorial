#include<stdio.h>
int main()
{
    int a,b;

    printf("enter any number: ");
    scanf("%d",&a);
    printf("--------multiplication table of %d---------\n",a);

    for(b=1;b<=10;++b)
    {
        printf("%d * %d = %d\n",a,b,a*b);
    }
    return 0;
}