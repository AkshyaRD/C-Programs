
#include<stdio.h>
#include <string.h>

struct datas
{
	char name[20];
	int age;
	float gpa;
};

int main()
{
	struct datas x[4];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("Name: ");
		scanf("%s",&x[i].name);
		printf("Age: ");
		scanf("%d",&x[i].age);
		printf("gpa: ");
		scanf("%f",&x[i].gpa);
		
		
		printf("\nName: %s \n age: %d \n gpa: %f \n\n ",x[i].name,x[i].age,x[i].gpa,);
	}
	return 0;
}

