#include "../push_swap_bonus.h"

int ft_lstsize(t_list *stack)
{
    int i;

    i = 0;
    while(stack)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}

int sorted(int *arr, int size)
{
    int i;

    i = 0;    
    while (i < size -1)
    {
        if (arr[i] < arr[i +1])
            i++;
        else
            return (-1);
    }
    return (0);
}

void    if_sorted(t_list *stack_a)
{
    t_list  *tmp;
    int     size;
    int     *arr;
    int     i;

    size = ft_lstsize(stack_a);
    arr = malloc(size * sizeof(int));
    i = 0;
    while(stack_a)
    {
        tmp = stack_a;
        stack_a = stack_a->next;
        arr[i] =  tmp->data;
        i++;
    }
    if (sorted(arr, size) == -1)
        write(1,  "KO\n", 3);
    else
        write(1, "OK", 3);
    free(arr);
}