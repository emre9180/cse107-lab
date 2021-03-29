#include <stdio.h>
#include <string.h>

int N = 3;

struct info
{
	char name[10];
	char platforms[10][10];
	int PlatformCt;
};

void write(struct info array[], char platform[10])
{
	FILE *file;
	file = fopen("games.txt","w");
	fprintf(file,"%s games:\n\n",platform);
	int i;
	for(i=0;i<N;i++)
	{
		int j = 0;
		for(j=0;j<array[i].PlatformCt;j++)
		{
			if (strcmp(array[i].platforms[j],platform) == 0)
			{
				fprintf(file,"%s\n",array[i].name);
				j++;
			}
			
		}
		
	}
	fclose(file);
}

void read(struct info array[],int N)
{
	int i =0;
	for(i=0;i<N;i++)
	{
		char game[10];
		char platform[10][10];
		char platform_choice[10];
		printf("Enter name of your game: ");
		scanf("%s",game);
		strcpy(array[i].name,game);
		int j = 0;
		while(1)
		{
			
			printf("Platform of your games: (0 for stop): ");
			scanf("%s",platform_choice);
			if (strcmp(platform_choice,"0")==0) 
			{
				array[i].PlatformCt=j;
				break;
			}
			else
			{
				strcpy(array[i].platforms[j],platform_choice);
				j++;
			}
		}
		
	}
}

int main()
{
	struct info games[N];
	read(games,N);
	printf("Which platform do you want to write?\n");
	char platformc[10];
	scanf("%s",platformc);
	write(games,platformc);
	printf("Complated.");
	
	
}
