#include "../push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t i;
	char *res;
	char *q;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (0);
	q = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (q == NULL)
		return (0);
	res = q;
	i = 0;
	while (s1[i] && i < ft_strlen(s1))
		*res++ = s1[i++];
	i = 0;
	while (s2[i] && i < ft_strlen(s2))
		*res++ = s2[i++];
	*res = '\0';
	free(s1);
	return (q);
}