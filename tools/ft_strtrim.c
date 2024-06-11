/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:00:31 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:22:10 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_alloc_void(char *str)
{
	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char *s1, char *set)
{
	size_t	i;
	size_t	len;
	char	*s;

	s = NULL;
	if (!s1 || !set)
		return (0);
	if (!s1[0])
		return (ft_alloc_void(s));
	len = ft_strlen(s1);
	i = 0;
	len--;
	while (len && ft_strchr(set, s1[len]))
		len--;
	while (s1[i + 1] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (len < i)
		return (ft_alloc_void(s));
	return (ft_substr(s1, i, len - i + 1));
}
