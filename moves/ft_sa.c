#include "../push_swap.h"

void	ft_sa(t_list **list, int i)
{
	if (!list || !(*list) || !(*list)->next)
		return ;

	int tmp = (*list)->next->data;
	int tmp2 = (*list)->next->index;

	(*list)->next->data = (*list)->data;
	(*list)->next->index = (*list)->index;

	(*list)->data = tmp;
	(*list)->index = tmp2;
	if (i == 1)
		write(1, "sa\n", 3);
}