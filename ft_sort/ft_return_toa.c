/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_toa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:01:43 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:14:22 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_max(t_list *stack_b, int size)
{
	int		p;
	t_list	*head;

	p = 0;
	head = (stack_b);
	while (head)
	{
		if (head->index == size)
			return (p);
		head = head->next;
		p++;
	}
	return (-1);
}

void	ft_return_toa(t_list **stack_a, t_list **stack_b, int size)
{
	int	p;

	while (size >= 0)
	{
		p = ft_get_max(*stack_b, size);
		if (p != -1)
		{
			ft_get_on_top(stack_b, size, p);
			ft_pa(stack_a, stack_b);
		}
		size--;
	}
}
