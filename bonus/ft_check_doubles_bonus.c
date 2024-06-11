/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doubles_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:02:56 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:28:09 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	*ft_check_doubles(char **ptr)
{
	t_var	v;

	v.l = 0;
	while (ptr[v.l])
		v.l++;
	v.arr = ft_ascii_toi(ptr);
	v.j = 0;
	while (v.j < v.l)
	{
		v.i = v.j + 1;
		while (v.i < v.l)
		{
			if (v.arr[v.j] == v.arr[v.i])
			{
				write(1, "Error\n", 6);
				return (free(v.arr), NULL);
			}
			v.i++;
		}
		v.j++;
	}
	return (v.arr);
}
