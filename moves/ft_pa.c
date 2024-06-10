#include "../push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	if (!stack_b || !(*stack_b))
		return ;
	t_list *new;
	t_list *tmp;

	new = ft_lstnew((*stack_b)->data);
	ft_lstadd_front(stack_a, new);
	tmp = (*stack_b);
	if ((*stack_b)->next != NULL)
		(*stack_b) = (*stack_b)->next;
	else
		(*stack_b) = NULL;
	free(tmp);
	write(1, "pa\n", 3);
}