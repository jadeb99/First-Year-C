/*lab test 2
program to create a 2 dimensional array. the array will have 5 rows and 5 columns. first 
all elements in the array will be initialised to 5. second, the elements on the diagonal
will be changed to 0. third, the elements in both the middle row and column will be 
changed to 1 and lastly the elements in the corners will be changed to 2. then the 
ammount of each number will be displayed to the screen

auther: Jade Brennan
date: 03/12/2018
compiler: Dev-C++
*/


#include <stdio.h>
#define ROW 5
#define COL 5

int main()
{
	//declaring variables
	int i;
	int j;
	int zero = 0;
	int one = 1;
	int two = 2;
	//part a)
	int array[ROW][COL] =	{
								5, 5, 5, 5, 5,
								5, 5, 5, 5, 5,
								5, 5, 5, 5, 5,
								5, 5, 5, 5, 5,
								5, 5, 5, 5, 5
							};
	
	
	//part b)
	//set all elements in diagonals to be 0
	for(i=0; i<ROW; i++)
    {
   	    for(j=0; j<COL; j++)
       	{
           	if(i == j || 4 == i + j)
           	{
           		array[i][j] = 0;
			}//end if
   	    }//end for
   	}//end for

	
	//part c)
	//set the elements in both the middle row and column to 1
	for(i=0; i<ROW; i++)
    {
   	    for(j=0; j<COL; j++)
       	{
           	if(i == 2 || 4 == i + j)
           	{
           		array[i][j] = 1;
			}//end if
   	    }//end for
   	}//end for	
	
	//part d)
	//set the elements in the corners to 2
	for(i=0; i<ROW; i=i+4)
    {
   	    for(j=0; j<COL; j=j+4)
       	{
           	array[i][j] = 2;
   	    }//end for
   	}//end for
	
	//part e)
	//add amount of 0's, 1's and 2's
	for(i=0; i<ROW; i++)
    {
   	    for(j=0; j<COL; j++)
       	{
           	if(array[i][j]==0)
           	{
           		zero++;
			}//end if
			
			if(array[i][j]==1)
			{
				one++;
			}//end if
			
			if(array[i][j]==2)
			{
				two++;
			}
   	    }//end for
   	}//end for
   	
   	//display ammounts
   	printf("0 = %d\n1 = %d\n2 = %d", zero, one, two);
	
}//end main
