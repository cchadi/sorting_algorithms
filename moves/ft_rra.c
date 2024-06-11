/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:01:00 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:17:25 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_list **list, int i)
{
	t_list	*new;
	t_list	*last;
	t_list	*before;

	if (!list || !(*list) || !(*list)->next)
		return ;
	new = ft_lstnew(ft_lstlast((*list))->data);
	new->index = (ft_lstlast((*list)))->index;
	last = (*list);
	while (last->next)
	{
		if (last->next->next == NULL)
			before = last;
		last = last->next;
	}
	ft_lstadd_front(list, new);
	free(last);
	before->next = NULL;
	if (i == 1)
		write(1, "rra\n", 4);
}
