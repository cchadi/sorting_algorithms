/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:59:18 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/12 00:23:44 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			i++;
		else
			return (-1);
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (-1);
	}
	if (ft_atol(str) == -1)
		return (-1);
	return (0);
}

int	*ft_check_arg(char **ptr)
{
	int	l;

	if (!ptr)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	l = 0;
	while (ptr[l])
	{
		if (ft_isdigit(ptr[l]) == -1)
		{
			write(1, "Error\n", 6);
			return (NULL);
		}
		l++;
	}
	return (ft_check_doubles(ptr));
}
