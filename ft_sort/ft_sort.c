/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:02:03 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:15:44 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	counter(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	ft_sort(t_list **stack_a, t_list **stack_b, char **ptr)
{
	t_list	*copy;
	int		nodes;

	copy = (*stack_a);
	nodes = counter(copy);
	if (nodes == 2)
		ft_sort_2(stack_a);
	else if (nodes == 3)
		ft_sort_3(stack_a);
	else if (nodes == 4)
		ft_sort_4(stack_a);
	else if (nodes == 5)
		ft_sort_5(stack_a);
	else if (nodes > 5)
	{
		ft_sort_tob(stack_a, stack_b, ft_division(ft_getsize(ptr)));
		ft_return_toa(stack_a, stack_b, (ft_getsize(ptr)));
	}
}
