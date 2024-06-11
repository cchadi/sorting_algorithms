/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:04:48 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:13:15 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_lstsize(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] < arr[i + 1])
			i++;
		else
			return (-1);
	}
	return (0);
}

void	if_sorted(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	int		size;
	int		*arr;
	int		i;

	size = ft_lstsize(stack_a);
	arr = malloc(size * sizeof(int));
	i = 0;
	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		arr[i] = tmp->data;
		i++;
	}
	if (sorted(arr, size) != -1 && !stack_b)
		write(1, "OK", 3);
	else
		write(1, "KO\n", 3);
	free(arr);
}
