#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <fcntl.h>
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

int					check_instraction(char *str, t_list **stack_a,
						t_list **stack_b);
char				*ft_substr(char *s, unsigned int start, size_t len);
void				if_sorted(t_list *stack_a, t_list *stack_b);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_strncmp(char *s1, char *s2, size_t n);
void				linked_list(char **ptr, t_list **head);
char				*ft_readfile(int fd, char *buffer);
char				*ft_strtrim(char *s1, char *set);
char				*ft_strjoin(char *s1, char *s2);
int					*ft_check_doubles(char **ptr);
char				**ft_split(char *s, char c);
char				*ft_strchr(char *s, int c);
void				free_stack(t_list **stack);
char				*returnline(char *buffer);
int					*ft_check_arg(char **ptr);
t_list				*ft_lstlast(t_list *lst);
int					*ft_ascii_toi(char **ptr);
t_list				*ft_lstnew(int content);
char				*get_next_line(int fd);
char				**ft_getarg(char **av);
long long			ft_atol(char *str);
char				**parsing(char **av);
char				*ft_strdup(char *s1);
void				free_ptr(char **ptr);
int					ft_atoi(char *str);
size_t				ft_strlen(char *s);

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

#endif