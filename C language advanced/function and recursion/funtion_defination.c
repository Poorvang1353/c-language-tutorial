#include<stdio.h>
int sum(int a,int b);

int main()
{
    int c;
    c=sum(2,4);
    printf("the value of sum is %d\n",c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a+b;
    return result;
}