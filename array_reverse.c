/*reversing the order of 
elements in an array
*/
#include <stdio.h>

int main()
{
    //initializing
    int array[3] = {2, 4, 6};
    int array2[3] = {0};
    /*initializing an array to one input puts
    it in every box of the array
	
	index variables have to be int
    */
    int i;
    int j = 2;
    
    
    for(i=0; i<3; i++)
    {
        array2[i] = array[j];
        j--;
    }
    
    return 0;
}