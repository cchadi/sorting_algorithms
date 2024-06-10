#include "../push_swap_bonus.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s2[i] == (unsigned char)s1[i]
		&& (unsigned char)s1[i] && (unsigned char)s2[i] && i + 1 < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}