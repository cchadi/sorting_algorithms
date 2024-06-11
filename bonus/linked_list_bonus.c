/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:04:56 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:13:54 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	linked_list(char **ptr, t_list **head)
{
	t_list	*new;
	int		l;

	l = 0;
	while (ptr[l])
	{
		new = ft_lstnew(ft_atoi(ptr[l]));
		ft_lstadd_back(head, new);
		l++;
	}
	return ;
}
