/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:03:19 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:03:20 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_ra(t_list **list, int i)
{
	t_list	*new;
	t_list	*tmp;

	if (!list || !(*list))
		return ;
	new = ft_lstnew((*list)->data);
	new->index = (*list)->index;
	ft_lstadd_back(list, new);
	tmp = (*list);
	(*list) = (*list)->next;
	free(tmp);
	if (i == 1)
		write(1, "ra\n", 3);
}
