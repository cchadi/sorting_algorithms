#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}					t_list;

typedef struct s_check
{
	int				this;

}					t_check;

typedef struct s_arr
{
	int				*arr;
	int				size;
}					t_arr;

/**********    Tools    **********/

char				*ft_substr(char *s, unsigned int start, size_t len);
void				ft_get_on_top(t_list **stack_b, int size, int rep);
void				ft_put_index(t_list **stack_a, int *arr, int size);
void				*ft_calloc(size_t count, size_t size);
int					check_if_sorted(int *arr, int size);
void				ft_sort_arr(int **arr, int size);
char				*ft_strtrim(char *s1, char *set);
char				*ft_strjoin(char *s1, char *s2);
int					*ft_check_doubles(char **ptr);
char				**ft_split(char *s, char c);
char				*ft_strchr(char *s, int c);
void				free_stack(t_list **stack);
int					*ft_ascii_toi(char **ptr);
int					*ft_check_arg(char **ptr);
int					ft_getlen(t_list *stack);
char				**ft_getarg(char **ptr);
long long			ft_atol(char *str);
int					ft_getsize(char **ptr);
size_t				ft_strlen(char *str);
int					ft_division(int nbr);
char				*ft_strdup(char *s1);
void				free_ptr(char **ptr);
int					ft_atoi(char *str);

/**********    Linked_list    **********/

void				ft_lstdelone(t_list *list, void (*del)(int));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_linked_list(char **ptr, t_list **head);
t_list				*ft_lstnew(int content);
t_list				*ft_lstlast(t_list *lst);

/*******    MOVES    ******/

void				ft_rrr(t_list **stack_a, t_list **stack_b);
void				ft_ss(t_list **stack_a, t_list **stack_b);
void				ft_rr(t_list **stack_a, t_list **stack_b);
void				ft_pa(t_list **stack_a, t_list **stack_b);
void				ft_pb(t_list **stack_a, t_list **stack_b);
void				ft_rra(t_list **list, int i);
void				ft_rrb(t_list **list, int i);
void				ft_ra(t_list **list, int i);
void				ft_rb(t_list **list, int i);
void				ft_sa(t_list **list, int i);
void				ft_sb(t_list **list, int i);

/*********    Sort    **********/

void				ft_return_toa(t_list **stack_a, t_list **stack_b, int size);
void				ft_sort_tob(t_list **stack_a, t_list **stack_b, int range);
// void 	ft_sort_toa(t_list **stack_a, t_list **stack_b, int size);
void				ft_sort(t_list **stack_a, t_list **stack_b, char **ptr);
void				ft_sort_2(t_list **list);
void				ft_sort_3(t_list **list);
void				ft_sort_4(t_list **list);
void				ft_sort_5(t_list **list);

#endif