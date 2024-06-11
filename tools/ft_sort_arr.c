/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:59:57 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:21:19 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_arr(int **arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 0;
	while (j < size)
	{
		i = 1;
		while (i < size)
		{
			if ((*arr)[i] < (*arr)[i - 1])
			{
				tmp = (*arr)[i - 1];
				(*arr)[i - 1] = (*arr)[i];
				(*arr)[i] = tmp;
			}
			i++;
		}
		j++;
	}
}
