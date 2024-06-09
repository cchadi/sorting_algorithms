#include "../push_swap.h"

void    ft_sort_tob(t_list **stack_a, t_list **stack_b, int range)
{
    int i = 0;
    while((*stack_a))
    {
        if ((*stack_a)->index < i)
        {
            ft_pb(stack_a, stack_b);
            ft_rb(stack_b, 1);
            i++;
            range++;
        }
        else if((*stack_a)->index >= i && (*stack_a)->index <= range)
        {
            ft_pb(stack_a, stack_b);
            i++;
            range++;
        }
        else
            ft_ra(stack_a, 1);
    }
    return ;
}