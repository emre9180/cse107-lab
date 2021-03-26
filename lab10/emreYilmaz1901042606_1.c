#include <stdio.h>
#include <string.h>

	void reverse_string(char str[])
	{
		int length = strlen(str);
		int temp_length = length;

		if (length%2 == 1)
		{
			int i;
			
			for(i=0;i<(length+1)/2;i++)
			{
				char ctemp = str[i];
				str[i] = str[temp_length-1];
				str[temp_length-1] = ctemp;
			
				temp_length--;
			}
		}
		
		else
		{
			int i;
			
			for(i=0;i<(length)/2;i++)
			{
				char ctemp = str[i];
				str[i] = str[temp_length-1];
				str[temp_length-1] = ctemp;
			
				temp_length--;
			}
		}
	
	}
	

	
	int main()
	{
		char str_arr[100];
		printf (" Enter a string :");
		scanf("%s",str_arr);
		reverse_string(str_arr);
		printf("Reversed string is: %s \n",str_arr);
		
		return 0;

	}

