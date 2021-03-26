#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int findmode(int n, int arr[ ]) // finds mode
{
	int i;

	int current_number_tekrar; // keeps the repetation of current number

	int mode_tekrar = findnumberofx(arr[0],n,arr); // keeps maximum repetition.
	int mode = arr[0]; // keeps mod
	
	for(i=1;i<n;i++)
	{
		current_number_tekrar = findnumberofx(arr[i],n,arr);
		if (current_number_tekrar > mode_tekrar)
		{
			mode = arr[i];
			mode_tekrar = current_number_tekrar;
		}	
		
	}
	
	return mode;
	
}



int findnumberofx(int x, int n, int arr[ ])
{
	int ct = 0;
	int i;
	for (i=0;i<n;i++)
	{
		if (arr[i] == x)
		{
			ct++;
		}
	}
	
	return ct;
	
}

int findmax(int arr[ ]) //Finds max. repetations
{
	int max = arr[0];
	int i;
	for (i=0;i<10;i++)
	{
		if (arr[i]>max) max = arr[i];
	}
	
	return max;
}



int main()
{
	srand(time(NULL));
	int array[100];
	int i;
	for (i=0;i<100;i++) // filling the array that keeps 100 elements with numbers between 1-10
	{
		array[i] = (rand() % (10 - 1 + 1)) + 1;
	}
	
	int mode = findmode(100,array);
	
	int findmax_array[10];
	for(i=1;i<=10;i++)
	{
		printf("%d ---> %d\n",i,findnumberofx(i,100,array)); // printing  which number repeats how many times
		findmax_array[i-1] = findnumberofx(i,100,array); // filling the array that keeps repetation of the numbers. it will be send to findmax function to find max. repetations.
		
	}
	
	printf("\nMode = %d",findmode(100,array)); // printing mode
	printf("\nMax repetitions = %d",findmax(findmax_array)); // printing max. repetations.
	
	
}
