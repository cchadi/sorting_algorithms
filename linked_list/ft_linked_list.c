/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:01:21 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:16:01 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_linked_list(char **ptr, t_list **head)
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
