#include<stdio.h>
int main()
{
    float a[2][2], b[2][2], result[2][2];
    printf("Enter elemtents of 1st matrix\n");
    for(int i=0;i<2;++i)
     for(int j=0;j<2;++j)
    {
        printf("Enter a%d%d: ",i+1,j+1);
        scanf("%f",&a[i][j]);
    }
    
    // Taking input using nested for loop
    printf("Enter elements of 2nd matrix\n");
    for(int i=0;i<2;++i)
     for (int j = 0; j < 2; ++j)
     {
         printf("Enter b%d%d: ",i+1,j+1);
         scanf("%f",&b[i][j]);
     }
     
     //adding correspinding elements of two arrays
     for(int i=0;i<2;++i)
     for (int j = 0; j < 2; ++j)
     {
         result[i][j] = a[i][j] +b[i][j];
     }

     //Dinsplaying the sum
     printf("\nSum of Matrix:");
      
      for(int i=0;i<2;++i)
     for (int j = 0; j < 2; ++j)
     {
        printf("%.1f\t",result[i][j]);

        if(j == 1)
         printf("\n");
     }

    return 0;
}