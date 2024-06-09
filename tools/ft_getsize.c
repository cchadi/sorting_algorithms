#include "../push_swap.h"

int     ft_getsize(char **ptr)
{
    int l;

    l = 0;
    while(ptr[l])
        l++;
    return (l);
}