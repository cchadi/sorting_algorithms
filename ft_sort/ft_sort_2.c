#include "../push_swap.h"

void	ft_sort_2(t_list **list)
{
	int a = (*list)->data;
	int b = (*list)->next->data;

	if (a > b)
		ft_sa(list, 1);
}