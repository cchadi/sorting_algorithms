#include "../push_swap_bonus.h"

void    do_instraction(int l, t_list **stack_a, t_list **stack_b)
{
    if (l == 0)
        ft_pa(stack_a, stack_b);
    else if (l == 1)
        ft_pb(stack_a, stack_b);
    else if (l == 2)
        ft_sa(stack_a, 0);
    else if (l == 3)
        ft_sb(stack_b, 0);
    else if (l == 4)
        ft_ss(stack_a, stack_b);
    else if (l == 5)
        ft_ra(stack_a, 0);
    else if (l == 6)
        ft_rb(stack_b, 0);
    else if (l == 7)
        ft_rr(stack_a, stack_b);
    else if (l == 8)
        ft_rra(stack_a, 0);
    else if (l == 9)
        ft_rrb(stack_b, 0);
    else if (l == 10)
        ft_rrr(stack_a, stack_b);
    return ;
}

char    **get_inst(void)
{
    char    **ptr;

    ptr = malloc(12 * sizeof(char *));
    ptr[0] = "pa\n";
    ptr[1] = "pb\n";
    ptr[2] = "sa\n";
    ptr[3] = "sb\n";
    ptr[4] = "ss\n";
    ptr[5] = "ra\n";
    ptr[6] = "rb\n";
    ptr[7] = "rr\n";
    ptr[8] = "rra\n";
    ptr[9] = "rrb\n";
    ptr[10] = "rrr\n";
    ptr[11] = NULL;

    return (ptr);
}

int check_instraction(char *str, t_list **stack_a, t_list **stack_b)
{
    int     l;
    char    **ptr;

    ptr = get_inst();
    l = 0;
    while (ptr[l])
    {
        if(ft_strncmp(str, ptr[l], ft_strlen(str)) == 0)
        {
            do_instraction(l, stack_a, stack_b);
            return (0);
        }
        else
            l++;
    }
    write(2, "Error\n", 6);
    return (-1);
}