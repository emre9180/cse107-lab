#include <stdio.h>

/* Emre YILMAZ 1901042606 */

void if_composite(int num)
{

	int flag = 0;
	int i;
	for(i=2;i<num;i++)
	{
		
		if (num % i == 0 )
		{
			flag=1;
			break;
		}
	}
	
	if (flag==1) printf("%d is composite number\n",num);
}

int main()
{
	printf("Enter your number: ");
	int num;
	scanf("%d",&num);
	int i;
	
	for (i=2;i<=num;i++)
	{
		if_composite(i);
	}
	
	
	

}
