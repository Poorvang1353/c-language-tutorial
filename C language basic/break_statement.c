#include<stdio.h> 

int main() 

{ 
	int i,age; 

	for(i = 0 ; i < 5 ; i++) 

	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 

		if (age>10) 

		{ 

			break; // Checking Break Statement 

		} 

	} 
    
    return 0; 
} 
