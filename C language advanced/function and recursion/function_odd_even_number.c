#include<stdio.h>
int find_num(int a);
int main()
{
    int b;
    printf("\nEnter any number: ");
    scanf("%d",&b);
    b = find_num(b);
    return 0;
}

int find_num(int a)
{
    if(a%2==0)
    {
        printf("%d is an odd number",a);
        return a;
    }
    else
    {
        printf("%d is an even number",a);
        return a;
    }
}