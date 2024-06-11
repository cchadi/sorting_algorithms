/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:01:48 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:24:18 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	t_order	o;

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
