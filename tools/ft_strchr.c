#include "../push_swap.h"

char	*ft_strchr(char *s, int c)
{
	size_t	l;
	char	*str;

	l = 0;
	str = (char *)s;
	while (str[l] != '\0')
	{
		if ((char)c == str[l])
			return (&str[l]);
		else
			l++;
	}
	if (str[l] == (char)c)
		return (&str[l]);
	return (NULL);
}
