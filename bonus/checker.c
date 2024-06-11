/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:02:10 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 02:47:30 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	check_str(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(1);
		if (!str)
		{
			if_sorted(*stack_a, *stack_b);
			return (free(str), -1);
		}
		if (check_instraction(str, stack_a, stack_b) == -1)
			return (free(str), -1);
		free(str);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**ptr;

	if (ac > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		ptr = parsing(av);
		if (!ptr)
			return (0);
		linked_list(ptr, &stack_a);
		free_ptr(ptr);
		if (check_str(&stack_a, &stack_b) == -1)
		{
			free_stack(&stack_a);
			free_stack(&stack_b);
			return (0);
		}
	}
	return (0);
}
