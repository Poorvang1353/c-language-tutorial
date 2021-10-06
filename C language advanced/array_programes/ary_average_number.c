#include <stdio.h>
int main()
{
     int marks[10], i, n, sum = 0, average;
     printf("How many subject you have: ");
     scanf("%d", &n);
     for(i=0; i<n; i++)
     {
          printf("Enter %d subject mark's: ",i+1);
          scanf("%d", &marks[i]);
          sum =sum+marks[i];
     }
     average = sum/n;
     printf("Average = %d", average);
     return 0;
}
