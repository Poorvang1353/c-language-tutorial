#include<stdio.h>
int main()
{
    int data[100],i,n,step,temp;
    printf("Enter the number of elemnts to be sorted: ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d element enter: ",i+1);
        scanf("%d",&data[i]); 
    }
    
    for ( step = 0; step < n-1; ++step)
    for ( i = 0; i < n-step-1; ++i)
    {
        if (data[i]>data[i+1])
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
        
    }
    printf("sorted list in ascending order: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d,",data[i]);
    }
    
    
    
    return 0;
}