#include "../push_swap.h"

int     get_min(t_list *stack, int index)
{
    int p;
    t_list *head;

    p = 0;
    head = (stack);
    while(head)
    {
        if (head->index == index)
            return (p);
        head = head->next;
        p++;
    }
    return (0);
}

void    get_on_top(t_list **stack, int size, int rep)
{
    if (rep <= size/2)
    {
        while(rep > 0)
        {
            ft_ra(stack, 1);
            rep--;
        }
    }
    if (rep > size/2)
    {
        rep = size - rep;
        while(rep > 0)
        {
            ft_rra(stack, 1);
            rep--;
        }
    }
    return ;
}

void    ft_sort_5(t_list **list)
{
    t_list *stack_b;

    get_on_top(list, 5, get_min((*list), 0));
    ft_pb(list, &stack_b);
    get_on_top(list, 4, get_min((*list), 1));
    ft_pb(list, &stack_b);
    ft_sort_3(list);
    ft_pa(list, &stack_b);
    ft_pa(list, &stack_b);
    return ;
}