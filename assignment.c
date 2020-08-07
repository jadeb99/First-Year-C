/* this program is designed to 
operate like an ATM machine. Allows
users to manage their PIN

author: Jade B
date: 25.10.18
*/

#include <stdio.h>

int main()
{
	//declaring variables
	int MenuOption = 0;
	int pin = 1234;
	int pin2 = 0;
	int correct = 0;
	int incorrect = 0;
	int input;
	
	
	do
	{
		printf("welcome to this ATM \n");
		printf("\n enter your selection \n");
		printf("\n press 1 to enter PIN \n");
		printf("\n press 2 to change pin \n");
		printf("\n press 3 to display number of times the PIN has been entered \n");
		printf("\n press 4 to exit program \n");
		scanf("%d", &MenuOption);
		
		if(MenuOption == 1)									//enter PIN
		{
			printf("\n enter PIN \n");
			scanf("%d", &input);								//inputting PIN
			
			if(input == pin)									//checking if PIN is correct
			{
				printf("\n PIN is correct \n");
				correct++;									//incrementing correct PIN counter
			}//end if
			else
			{
				printf("\n PIN is incorrect \n");
				incorrect++;								//incrementing incorrect PIN counter
			}//end else
		}//end option
		
		if(MenuOption == 2)									//change PIN
		{
			printf("\n enter your new PIN \n");
			scanf("%d", &input);                              //inputting new PIN
			
			if((input>9999||input<1000)&&input!=0000)
			{
			    printf("Pin has to be 4 digits only\n");
			}//end if
			else
			{
    			printf("\n re-enter your new PIN \n");
    			scanf("%d", &pin2);								//verifying new PIN
    			
    			if(pin2 == input)
    			{
    			    pin = input;
    				printf("\n your PIN has been changed \n");
    			}//end if
    			else
    			{
    				printf("\n inputs do not match \n");
    				printf("\n no change has occurred \n");		//error message
    			}//end else
			}//end else
		}//end option
	
		if(MenuOption == 3)
		{
			printf("\n PIN has been entered %d time(s) correctly", correct);
			printf("\n PIN has been entered %d time(s) incorrectly", incorrect);
		}//end if
	}//end do
	while(MenuOption != 4);
	
	return 0;
}//end main
