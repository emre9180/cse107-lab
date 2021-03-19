#include <stdio.h>

int main()
{
	printf("Enter the height: ");
	int height;
	scanf("%d",&height);
	
	char printing_char = '*';
	
	int i;
	for(i=1;i<=height;i++)
	{
		int k;
		for(k=0;k<i;k++)
		{
			printf("%c",printing_char);
		}
		printf("\n");
	}
}
