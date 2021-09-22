#include<stdio.h>

int main()

{
    int i=0,b;

    printf("Enter a value: ");

    scanf("%d",&b);

    for (int i = 1; i <= b;  i++)
    {
        printf("%d\n",i); 
    }
    
    return 0;
}