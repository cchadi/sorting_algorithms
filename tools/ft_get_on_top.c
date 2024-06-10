#include "../push_swap.h"

void	ft_get_on_top(t_list **stack_b, int size, int rep)
{
	if (rep <= size / 2)
	{
		while (rep > 0)
		{
			ft_rb(stack_b, 1);
			rep--;
		}
	}
	else if (rep > size / 2)
	{
		rep = size - rep;
		while (rep >= 0)
		{
			ft_rrb(stack_b, 1);
			rep--;
		}
	}
	return ;
}