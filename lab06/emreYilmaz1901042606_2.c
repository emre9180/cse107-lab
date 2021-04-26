#include <stdio.h>

/* Emre YILMAZ 1901042606 */

int main()
{
	printf("Enter a number : ");
	int number;
	int flag = 0; // this flag determines whether the number is divided without remainder. if the flag=1, it means the number is divided a number without remainder and the number is not prime.
	scanf("%d",&number);
	
	int i;
	for (i=2;i<number;i++)
	{
		if (number%i == 0)
		{
			flag = 1;
			break;
		}
		
	}
	
	if (flag==0) printf("Your number '%d' is prime.",number);
	else printf("Your number '%d' is not prime.",number);
}
