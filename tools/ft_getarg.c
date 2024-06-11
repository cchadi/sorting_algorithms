/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:59:46 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:20:50 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**ft_getarg(char **av)
{
	char	**ptr;
	char	*str;
	int		l;

	l = 1;
	str = NULL;
	while (av[l])
	{
		str = ft_strjoin(str, av[l]);
		str = ft_strjoin(str, " ");
		if (av[l][0] == '\0')
			return (free(str), NULL);
		l++;
	}
	ptr = ft_split(str, ' ');
	return (free(str), ptr);
}
