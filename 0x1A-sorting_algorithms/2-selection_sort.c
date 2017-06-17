#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts a list of integers in ascending order
 * @array: array of ints
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
        unsigned int i,k,j, index;

	if (array == NULL || size < 2)
		return;

        for (i = 0; i < size; i++)
        {
                index = i; /* set index to i in loop */
                for (k = i; k < size; k++)
                {
                        /* If first num greater than second num*/
                        if (array[index] > array[k] )
                        {
                                /* set the index to equal index
                                   of 1st out of sequence numbers */
                                index = k;
                        }
                }
                if ( index != i )
                {
                        /* swap intgers */
                        j = array[i];
                        array[i] = array[index];
                        array[index] = j;
                        print_array(array, size);
                }
        }
}
