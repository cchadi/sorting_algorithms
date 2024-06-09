#include "../push_swap.h"

int     check_if_sorted(int *arr, int size)
{
    int i;

    i = 0;
    while (i < size -1)
    {
        if (arr[i] < arr[i+1])
        {
            i++;
        }
        else
            return (-1);    
    }
    return (0);
}