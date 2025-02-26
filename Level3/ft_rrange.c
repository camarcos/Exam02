#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = (end - start) + 1;
    int *result;
    if(len < 0)
        len = -len + 1;
    if(!(result = (int *)malloc(sizeof(int)*len)))
        return(NULL);
    while(i < len )
    {
        result[i++] = start;
        if (end > start)
            end--;
        else
            end++;
    }
    return(result);
}

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:
// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.*/