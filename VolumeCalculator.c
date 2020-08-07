/* program to find the volume
of a sphere and cube

author: Jade B
date: 24.10.18
*/

#include <stdio.h>
#define PI 3.14
int main()
{
	//declaring variables
	int menuoption = 0;
	float radius = 0;
	float side = 0;
	float spherevolume = 0;
	float cubevolume = 0;
	
	
	
	do
	{
		printf("welcome to the volume calculator \n");
		printf("\n enter your selection \n");
		printf("\n press 1 to enter radius of sphere \n");
		printf("\n press 2 to enter length of side of cube \n");
		printf("\n press 3 to end program \n");
		scanf("%d", &menuoption);
		
		if(menuoption == 1)
		{
			printf("\n enter the radius of sphere \n");
			scanf("%f", &radius);
			spherevolume = (4*(PI*(radius*radius*radius)));
			printf("\n volume of sphere is %f", spherevolume);
		}//end of option 
		
		if(menuoption == 2)
		{
			printf("\n enter the lenght of a side of a cube \n");
			scanf("%f", &side);
			cubevolume = side * side * side;
			printf("\n the volume of the cube is %.2f \n", cubevolume);
		}
		
		if(menuoption == 3)
		{
			printf("\n end program");
		}
	}
	
	while(menuoption != 3);
	
	return 0;
}