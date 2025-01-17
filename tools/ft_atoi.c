/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:59:08 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 23:46:54 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_get_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

static int	ft_nbrlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] == '0')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_atoi(char *str)
{
	int					i;
	int					sign;
	unsigned long long	res;
	int					m;

	i = 0;
	res = 0;
	sign = 1;
	m = ft_nbrlen(str);
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = ft_get_sign(str[i++]);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	if ((m >= 20 || res > LLONG_MAX))
		return (-1);
	return (res * sign);
}
