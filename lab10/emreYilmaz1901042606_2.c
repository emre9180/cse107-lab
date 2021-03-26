#include <stdio.h>

void print_line(char c, int num_of_chars) // this function prints a line.
{
	int i;
	for(i=0;i<num_of_chars;i++)
	{
		printf("%c",c);
	}
	printf("\n");
}

void print_histogram(char c, int vals[])
{
	int length = len(vals);
	int i;
	for(i=0;i<length;i++)
	{
		print_line('*',vals[i]);
	}
}

int len(int arr[]) // this function helps us to find how mamy lines we will print.
{
	int ct; //the variable that will be returned. it indicates the length of array excluding the negative number.
	int i;
	
	while(1)
	{
		if(arr[i] >= 0)
		{
			ct++;
		}
		
		else
		{
			break;
		}
	i++;
	}
	
	return ct;
}


int main()
{
	int values[100];
	int val = 1;
	int count = 0;
	
	printf("Enter positive integers, to print an histogram.\nEnter a non-positive integer to stop.\n\n");
	do
	{
		printf("Enter a value:");
		scanf("%d",&val);
		values[count] = val;
		count ++;
		
	}while(val>0);
	printf("\n");
	
	print_histogram('*',values);
	return 0;
}
