/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_on_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:59:37 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 00:59:38 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_get_on_top(t_list **stack_b, int size, int rep)
{
	if (rep <= size / 2)
	{
		while (rep > 0)
		{
			ft_rb(stack_b, 1);
			rep--;
		}
	}
	else if (rep > size / 2)
	{
		rep = size - rep;
		while (rep >= 0)
		{
			ft_rrb(stack_b, 1);
			rep--;
		}
	}
	return ;
}
