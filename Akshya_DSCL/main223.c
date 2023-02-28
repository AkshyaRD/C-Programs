// 01/02/23 DSC Lab 3
// Create a structure / data base for a car shop
// Details: Name, manufacturing year, cost, category(H/M/L)
// Take input from the user
//Create 2 functions- one in which input is taken and another in which output is displayed

#include<stdio.h> 

struct car_shop
{
	char name[20];
	int year;
	float cost;
	char category;
};

int main()
{
	struct car_shop x[4];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("Name: ");
		scanf("%s",&x[i].name);
		printf("Manufacturing Year: ");
		scanf("%d",&x[i].year);
		printf("Cost: ");
		scanf("%f",&x[i].cost);
		printf("Category(H/M/L): ");
		scanf("%s",&x[i].category);
		
		printf("\nCar Name: %s \nManufacturing Year: %d \nCost: %f \nCategory: %c \n\n ",x[i].name,x[i].year,x[i].cost,x[i].category);
	}
	return 0;
}

