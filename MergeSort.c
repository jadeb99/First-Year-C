/*mergesort
*/

#include <stdio.h>
#define SIZE 5

//prototypes
void merge(int*, int, int, int);
void sort(int*, int, int);


int main()
{
    //declare variables
    int i, array[SIZE];
    
    //prompt input from user
    printf("Input array contents\n");
    
    for (i=0;i<SIZE;i++)
    {
        scanf("%d", (array+i));
    }//end for

    //call funtion sort
    sort(array, 0, SIZE-1);

    //print the sorted array
    printf("\nSorted: ");
    
    for (i=0;i<SIZE;i++)
    {
        printf("%d ", *(array+i));
    }//end for

    return 0;
}//end main



//start sort
void sort(int *array, int start, int end)
{
    //declare variables
    int middle;
    
    if (start < end)
    {
        middle = (start + end) / 2;
        //call function sort again
        sort(array, start, middle);
        //call it once again
        sort(array, middle + 1, end);
        //this time call merge 
        merge(array, start, middle, end);
    }//end if
}//end sort



//start merge
void merge(int *array, int start, int middle, int end)
{
    //declare variables
    int lsize = (middle - start) + 1;
    int rsize = end - middle;

    int left[lsize];
    int right[rsize];

    int leftcount = 0;
    int rightcount = 0;

    int i;

    for (i=0; i<lsize; i++)
    {
        left[i] = *(array + start + i);
    }//end for
    
    for (i=0; i<rsize; i++)
    {
        right[i] = *(array + middle + 1 + i);
    }//end for

    i = start;
    
    while (leftcount < lsize && rightcount < rsize)
    {
        if (left[leftcount] < right[rightcount])
        {
            *(array + i) = left[leftcount];
            leftcount++;
        }//end if
        else
        {
            *(array + i) = right[rightcount];
            rightcount++;
        }//end else
        
        i++;
    }//end while
    
    while (leftcount < lsize)
    {
        *(array + i) = left[leftcount];
        leftcount++;
        i++;
    }//end while
    
    while (rightcount < rsize)
    {
        *(array + i) = right[rightcount];
        rightcount++;
        i++;
    }//end while
}//end merge

