#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->data = content;
	new_node->next = NULL;
	return (new_node);
}

// t_list	*ft_lstnew(int content, int index)
// {
// 	t_list	*new_node;

// 	new_node = (t_list *)malloc(sizeof(t_list));
// 	if (!new_node)
// 		return (0);
// 	new_node->data = content;
// 	new_node->index = index;
// 	new_node->next = NULL;
// 	return (new_node);
// }