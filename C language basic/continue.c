#include <stdio.h>

int main()
{

    int i, age;

        printf("Enter your age: ");
        scanf("%d", &age);

    for (i=0; i<1; i++)
    {

        if (age>10)
        {
            continue;
        }

        else
        {
            printf("we have not come accross any continue statements\n");
            printf("Poorvang is a good boy");
        }

        
    }
    
    return 0;
}

