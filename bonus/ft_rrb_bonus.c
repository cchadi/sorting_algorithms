/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:03:33 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:10:18 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rrb(t_list **list, int i)
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
	before->next = NULL;
	free(last);
	if (i == 1)
		write(1, "rrb\n", 4);
}
