#include "../push_swap_bonus.h"

void    free_ptr(char **ptr)
{
    int l;

    l = 0;
    while(ptr[l])
    {
        free(ptr[l]);
        l++;
    }
    free(ptr);
}