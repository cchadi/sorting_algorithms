#include "push_swap.h"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        t_list  *stack_a;
        t_list  *stack_b;
        char    **ptr;
        int     *arr;

        stack_a = NULL;
        stack_b = NULL;
        ptr = ft_getarg(av);
        arr = ft_check_arg(ptr);
        if (arr && check_if_sorted(arr, ft_getsize(ptr)) != 0)
        {
            ft_sort_arr(&arr, ft_getsize(ptr));
            ft_linked_list(ptr, &stack_a);
            ft_put_index(&stack_a, arr, ft_getsize(ptr));
            ft_sort(&stack_a, &stack_b, ptr);
        }
        free_ptr(ptr);
        free(arr);
        free_stack(&stack_a);
    }
    return (0);
}