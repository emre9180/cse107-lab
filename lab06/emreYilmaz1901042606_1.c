#include <stdio.h>

int main()
{
	
	int num1 = 0;
	int num2 = 1;
	int ct = 0;
	int bound;
	
	printf("Please enter how many terms you would like to print? : ");
	scanf("%d",&bound);
	
	printf("%d %d ",num1,num2);
	ct = 2;
	
	int num;
	
	while (ct<bound)
	{
		num = num1+num2;
		printf("%d ",num);
		num1 = num2;
		num2 = num;
		ct++;
	}
}
