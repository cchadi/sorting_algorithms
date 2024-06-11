/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:03:15 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:09:35 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;
	t_list	*tmp;

	if (!stack_a || !(*stack_a))
		return ;
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
