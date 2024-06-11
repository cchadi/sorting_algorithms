/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:01:53 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:14:53 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getmin(t_list *stack, int index)
{
	int		p;
	t_list	*head;

	p = 0;
	head = (stack);
	while (head)
	{
		if (head->index == index)
			return (p);
		head = head->next;
		p++;
	}
	return (0);
}

void	get_ontop(t_list **stack, int size, int rep)
{
	if (rep <= size / 2)
	{
		while (rep > 0)
		{
			ft_ra(stack, 1);
			rep--;
		}
	}
	if (rep > size / 2)
	{
		rep = size - rep;
		while (rep > 0)
		{
			ft_rra(stack, 1);
			rep--;
		}
	}
	return ;
}

void	ft_sort_4(t_list **list)
{
	t_list	*stack_b;

	stack_b = NULL;
	get_ontop(list, 4, getmin((*list), 0));
	ft_pb(list, &stack_b);
	ft_sort_3(list);
	ft_pa(list, &stack_b);
	return ;
}
