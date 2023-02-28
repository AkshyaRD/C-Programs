// 01/02/23 DSC Lab 3
// Create a structure / data base for a car shop
// Details: Name, manufacturing year, cost, category(H/M/L)
// Create a variable and assign values to it

#include<stdio.h>
#include <string.h>

struct car_shop
{
	char name[20];
	int year;
	float cost;
	char category;
};

int main()
{
	struct car_shop x;
	//x.name="Maruti"; Cannot assign directly
	memcpy(x.name, "Maruti Wagon r", 14);
	x.year=1999;
	x.cost=547000.00;
	x.category='M';
	printf("Car Name: %s \nManufacturing Year: %d \nCost: %f \nCategory: %c",x.name,x.year,x.cost,x.category);
	return 0;
}

