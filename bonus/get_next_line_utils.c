/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:43:20 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/10 22:09:00 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *s1)
{
	size_t	i;
	size_t	len;
	char	*s2;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	s2 = malloc(len + 1 * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		j;
	int		i;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free (s1);
	return (str);
}

char	*ft_strchr(char *s, int c)
{
	size_t	l;
	char	*str;

	l = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	while (str[l] != '\0')
	{
		if ((char)c == str[l])
			return (&str[l]);
		else
			l++;
	}
	return (NULL);
}
