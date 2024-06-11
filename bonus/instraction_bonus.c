/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:04:53 by csaidi            #+#    #+#             */
/*   Updated: 2024/06/11 01:13:32 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	do_instraction(int l, t_list **stack_a, t_list **stack_b)
{
	if (l == 0)
		ft_pa(stack_a, stack_b);
	else if (l == 1)
		ft_pb(stack_a, stack_b);
	else if (l == 2)
		ft_sa(stack_a, 0);
	else if (l == 3)
		ft_sb(stack_b, 0);
	else if (l == 4)
		ft_ss(stack_a, stack_b);
	else if (l == 5)
		ft_ra(stack_a, 0);
	else if (l == 6)
		ft_rb(stack_b, 0);
	else if (l == 7)
		ft_rr(stack_a, stack_b);
	else if (l == 8)
		ft_rra(stack_a, 0);
	else if (l == 9)
		ft_rrb(stack_b, 0);
	else if (l == 10)
		ft_rrr(stack_a, stack_b);
	return ;
}

char	**get_inst(void)
{
	char	**ptr;

	ptr = malloc(12 * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr[0] = ft_strdup("pa\n");
	ptr[1] = ft_strdup("pb\n");
	ptr[2] = ft_strdup("sa\n");
	ptr[3] = ft_strdup("sb\n");
	ptr[4] = ft_strdup("ss\n");
	ptr[5] = ft_strdup("ra\n");
	ptr[6] = ft_strdup("rb\n");
	ptr[7] = ft_strdup("rr\n");
	ptr[8] = ft_strdup("rra\n");
	ptr[9] = ft_strdup("rrb\n");
	ptr[10] = ft_strdup("rrr\n");
	ptr[11] = NULL;
	return (ptr);
}

int	check_instraction(char *str, t_list **stack_a, t_list **stack_b)
{
	int		l;
	char	**ptr;

	ptr = get_inst();
	l = 0;
	while (ptr[l])
	{
		if (!str)
			return (free_ptr(ptr), -1);
		if (ft_strncmp(str, ptr[l], ft_strlen(str)) == 0)
		{
			do_instraction(l, stack_a, stack_b);
			free_ptr(ptr);
			return (0);
		}
		else
			l++;
	}
	free_ptr(ptr);
	write(2, "Error\n", 6);
	return (-1);
}
