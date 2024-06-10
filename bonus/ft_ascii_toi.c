#include "../push_swap.h"

int	*ft_ascii_toi(char **ptr)
{
	int i;
	int *arr;

	i = 0;
	while (ptr[i])
		i++;
	arr = malloc(i * sizeof(int));
	i = 0;
	while (ptr[i])
	{
		arr[i] = ft_atoi(ptr[i]);
		i++;
	}
	return (arr);
}