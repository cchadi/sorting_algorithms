#include "../push_swap.h"

void    ft_get_index(t_list *stack_a, int *arr, int size)
{
    int i = 0;
    while(i < size)
    {
        if (stack_a->data == arr[i])
        {
            stack_a->index = i;
            break;
        }
        i++;
    }
    return ;
}

void    ft_put_index(t_list **stack_a, int *arr, int size)
{
    t_list *tmp;

    tmp = (*stack_a);
    while(tmp)
    {
        ft_get_index(tmp, arr, size);
        tmp = tmp->next;
    }
}