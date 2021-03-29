#include <stdio.h>
#define filename "TASK.txt"

struct students
{
	char name[15];
	char surname[15];
	int ID;
	float GPA;
};

int main()
{
	FILE *file;
	file = fopen(filename,"r");

	if(file == NULL)
	{
		printf("Could not read the file.");
		return 0;
	}
	
	struct students studs[15];	
	int ct = 0;
	
	while(!feof(file))
	{
		fscanf(file,"%s %s %d %f",studs[ct].name,studs[ct].surname,&studs[ct].ID,&studs[ct].GPA);
		ct++;
	}
	
	int max_index = 0;
	int max = studs[0].GPA;
	int min_index = 0;
	int min = studs[0].GPA;
	
	int i;
	for(i=0;i<15;i++)
	{
		
		if(studs[i].GPA > max)
		{
			max = studs[i].GPA;
			max_index = i;
		}
		
		if(studs[i].GPA < min)
		{
			min = studs[i].GPA;
			min_index = i;
		}

	}
	
	printf("The student with highest GPA:\n");
	printf("NAME: %-10s SURNAME: %-10s ID: %d GPA: %.1f ",studs[max_index].name, studs[max_index].surname, studs[max_index].ID, studs[max_index].GPA);
	
	printf("\n\nThe student with lowest GPA:\n");
	printf("NAME: %-10s SURNAME: %-10s ID: %d GPA: %.1f ",studs[min_index].name, studs[min_index].surname, studs[min_index].ID, studs[min_index].GPA);
	
	
}
