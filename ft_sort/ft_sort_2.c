/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:01:45 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:29:59 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_2(t_list **list)
{
	int	a;
	int	b;

	a = (*list)->data;
	b = (*list)->next->data;
	if (a > b)
		ft_sa(list, 1);
}
