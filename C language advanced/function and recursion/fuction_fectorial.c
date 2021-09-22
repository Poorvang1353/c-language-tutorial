#include<stdio.h>
int factorial(int a);
int main()
{
    int x;
    printf("Enter the vlaue: ");
    scanf("%d",&x);
    printf(" factorial of %d is: %d\n",x,factorial(x));
    return 0;
}

int factorial(int a){
    if(a==1 || a==0)
    {
       return 1;
    }
    else
    {
       return a * factorial(a-1);    
    }

}