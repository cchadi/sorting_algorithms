#include "../push_swap_bonus.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !(*stack_a))
		return ;
	t_list *new;
	t_list *tmp;

	new = ft_lstnew((*stack_a)->data);
	new->index = (*stack_a)->index;
	ft_lstadd_front(stack_b, new);
	tmp = (*stack_a);
	if ((*stack_a)->next != NULL)
		(*stack_a) = (*stack_a)->next;
	else
		(*stack_a) = NULL;
	free(tmp);
}