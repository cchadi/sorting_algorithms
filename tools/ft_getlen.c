#include "../push_swap.h"

int    ft_getlen(t_list *stack)
{
    int i;

    i = 0;
    while(stack->next)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}