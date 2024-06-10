#include "../push_swap_bonus.h"

int main(int ac, char **av)
{
    t_list  *stack_a;
    t_list  *stack_b;
    char    **ptr;
    char    *str;
    if (ac > 1)
    {
        stack_a = NULL;
        stack_b = NULL;
        ptr = parsing(av);
        if (!ptr)
            return (0);
        linked_list(ptr, &stack_a);
        while(1)
        {
            str = get_next_line(1);
                if (str[0] ==  '\0')
            {
                if_sorted(stack_a);
                return (0);
            }
            if (check_instraction(str) == -1)
            {
                free_stack(&stack_a);
                free_stack(&stack_b);
                return(0);
            }
        }
    }
}