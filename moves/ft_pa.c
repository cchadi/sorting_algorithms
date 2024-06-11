/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:00:41 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:16:41 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;
	t_list	*tmp;

	if (!stack_b || !(*stack_b))
		return ;
	new = ft_lstnew((*stack_b)->data);
	ft_lstadd_front(stack_a, new);
	tmp = (*stack_b);
	if ((*stack_b)->next != NULL)
		(*stack_b) = (*stack_b)->next;
	else
		(*stack_b) = NULL;
	free(tmp);
	write(1, "pa\n", 3);
}
