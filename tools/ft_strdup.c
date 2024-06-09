#include "../push_swap.h"

char	*ft_strdup(char *s1)
{
	char	*ptr;
	char	*q;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	q = ptr;
	while (*s1)
	{
		*q = *s1;
		q++;
		s1++;
	}
	*q = '\0';
	return (ptr);
}