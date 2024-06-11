/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:05:27 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:05:28 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	**parsing(char **av)
{
	char	**ptr;
	int		*arr;

	ptr = ft_getarg(av);
	arr = ft_check_arg(ptr);
	if (!arr)
		return (free_ptr(ptr), NULL);
	free(arr);
	return (ptr);
}
