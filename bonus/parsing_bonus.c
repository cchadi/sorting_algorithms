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
