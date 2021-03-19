#include <stdio.h>

int main()
{
	int number;
	printf("Please enter a number : ");
	scanf("%d",&number);
	
	int sum = 0;
	
	int i;
	for (i=1;i<number;i++)
	{
		if (number%i == 0) sum+=i;
		
	}
	
	if (number==sum) printf("Your number '%d 'is perfect number",number);
	else printf("Your number '%d' is not perfect number",number);
}
