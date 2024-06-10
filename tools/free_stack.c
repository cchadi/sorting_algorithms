#include "../push_swap.h"

void	free_stack(t_list **stack)
{
	t_list *tmp;

	while ((*stack))
	{
		tmp = (*stack);
		(*stack) = (*stack)->next;
		free(tmp);
	}
}