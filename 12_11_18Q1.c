/*12.11.18 lab questions
question 1
What is in a[8] after the following code is executed?
 for (i = 0; i < 10; i++)
 {
 a[i] = 9 - i;
 }
 for (i = 0; i < 10; i++)
 {
 a[i] = a[ a[i] ];
 }
Include this code in a full program, compile and run it. Display the contents of a[8] to
see its contents. Do you understand how it works and what is happening? Step
through the process on paper to understand it.
*/

#include <stdio.h>
#define SIZE 8

int main()
{
	int a[SIZE];
	int i;
	
	for (i = 0; i < 10; i++)
	{
		a[i] = 9 - i;
	}//end for
 	for (i = 0; i < 10; i++)
	{
		a[i] = a[ a[i] ];
		printf(“a is %p and &a[0] is %p”, a, &a[0]);
	}//end for
	
}//main
