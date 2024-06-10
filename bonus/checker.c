#include "../push_swap_bonus.h"

int	check_str(char *str, t_list **stack_a, t_list **stack_b)
{
	if (!str)
	{
		if_sorted(*stack_a, *stack_b);
		return (-1);
	}
	if (check_instraction(str, stack_a, stack_b) == -1)
		return (-1);
	return (0);
}

int	main(int ac, char **av)
{
	t_list *stack_a;
	t_list *stack_b;
	char **ptr;
	char *instr;

	if (ac > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		ptr = parsing(av);
		if (!ptr)
			return (0);
		linked_list(ptr, &stack_a);
		free_ptr(ptr);
		while (1)
		{
			instr = get_next_line(1);
			if (check_str(instr, &stack_a, &stack_b) == -1)
			{
				free(instr);
				free_stack(&stack_a);
				free_stack(&stack_b);
				return (0);
			}
			free(instr);
		}
	}
	return (0);
}