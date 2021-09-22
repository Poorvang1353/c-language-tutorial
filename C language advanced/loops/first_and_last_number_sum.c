#include<stdio.h>
int main()
{
    int no,sum=0;
    printf("\nEnter any number: ");
    scanf("%d",&no);
    if(no<10)
    {
        printf("\nplease! Enter a number greater then 10");
    }
    else
    {
        sum = sum + no%10;
        while(no>9)
        {
            no = no/10;
        }
        sum = sum + no;
    }
    printf("\n Sum of first and last number is: %d",sum);
    return 0;
}