#include<stdio.h>
void swap(int *a, int *b);

int main()
{
    int a,b;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    printf("The value of a & b befor swap is %d and %d\n",a,b);
    swap(&a, &b);
    printf("The value of a & b after swap is %d and %d\n",a,b);
    return 0;
}

void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}