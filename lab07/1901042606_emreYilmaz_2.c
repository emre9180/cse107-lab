#include <stdio.h>

/* Emre YILMAZ 1901042606 */

int main()
{
	printf("Enter the height: ");
	int height;
	scanf("%d",&height);
	
	int i;
	for (i=1;i<=height;i++)
	{
	
	
		int p;
		for(p=0;(p<height-i);p++)
		{
			printf(" ");
		}
		for(p=0;p<((2*i)-1);p++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}
