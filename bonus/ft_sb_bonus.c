/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:03:43 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:11:43 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_sb(t_list **list, int i)
{
	int	tmp;
	int	tmp2;

	if (!list || !(*list) || !(*list)->next)
		return ;
	tmp = (*list)->next->data;
	tmp2 = (*list)->next->index;
	(*list)->next->data = (*list)->data;
	(*list)->next->index = (*list)->index;
	(*list)->data = tmp;
	(*list)->index = tmp2;
	if (i == 1)
		write(1, "sb\n", 3);
}
