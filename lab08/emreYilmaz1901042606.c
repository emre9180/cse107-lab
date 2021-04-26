#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Emre YILMAZ 1901042606 */

int main()
{
	
	
	int array[10][10];
	srand(time(NULL));

	int i,k; // for loops variables.

	for(i=0;i<10;i++) // Filling the array with randomly generated numbers between 20-99 >
	{
		for(k=0;k<10;k++)
		{
			array[i][k] = (rand() % (99 - 20 + 1)) + 20;
		}
	}
		
	
	printf("\n-- -- -- Printing the 2D array that keeps randomly generated numbers -- -- --\n\n");
	
	for(i=0;i<10;i++) //Printing the filled array in row-wise format 
		{
			for(k=0;k<10;k++)
			{
				printf("%d ",array[i][k]);
			}
			printf("\n");
		}
		

	printf("\n\n");
	
	float new_array[10];
	
	for (k=0;k<10;k++) // Adding the sum of each COLUMN to a 1D array(new_array) 
	{
		float sum = 0;
	
		for(i=0;i<10;i++)
		{
			sum += array[i][k];
			new_array[k] = sum;
		}
	}
	
	printf("-- -- -- Printing the array that keeps sum of each column in 2D array. -- -- --\n\n");
	
	for (k=0;k<10;k++)
	{
		printf("sum of %d. column -> %.1f\n",k+1,new_array[k]);
	}
	
	
}
