/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii_toi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:59:05 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:19:45 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_ascii_toi(char **ptr)
{
	int	i;
	int	*arr;

	i = 0;
	while (ptr[i])
		i++;
	arr = malloc(i * sizeof(int));
	i = 0;
	while (ptr[i])
	{
		arr[i] = ft_atoi(ptr[i]);
		i++;
	}
	return (arr);
}
