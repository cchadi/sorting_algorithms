#include "../push_swap.h"

typedef struct s_order
{
	int	a;
	int	b;
	int	c;
}		t_order;

t_order	ft_get_order(t_list **list)
{
	t_order	o;
	t_list	*last;

	o.a = (*list)->data;
	o.b = (*list)->next->data;
	last = ft_lstlast((*list));
	o.c = last->data;
	return (o);
}

void	ft_sort_3(t_list **list)
{
	t_order o;
	o = ft_get_order(list);

	if (o.a > o.b && o.b < o.c && o.a < o.c)
		ft_sa(list, 1);
	else if (o.a > o.b && o.b > o.c && o.a > o.c)
	{
		ft_sa(list, 1);
		ft_rra(list, 1);
	}
	else if (o.a > o.b && o.b < o.c && o.a > o.c)
		ft_ra(list, 1);
	else if (o.a < o.b && o.b > o.c && o.a < o.c)
	{
		ft_sa(list, 1);
		ft_ra(list, 1);
	}
	else if (o.a < o.b && o.b > o.c && o.a > o.c)
		ft_rra(list, 1);
}