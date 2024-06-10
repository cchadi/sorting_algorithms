#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>


typedef struct s_list
{
    int data;
    int index;
    struct s_list *next;
}   t_list;


int     check_instraction(char *str, t_list **stack_a, t_list **stack_b);
char	*ft_substr(char *s, unsigned int start, size_t len);
int     ft_strncmp(char *s1, char *s2, size_t n);
void    linked_list(char **ptr, t_list **head);
char	*ft_readfile(int fd, char *buffer);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int     *ft_check_doubles(char **ptr);
void    free_stack(t_list **stack);
void    if_sorted(t_list *stack_a);
char	*returnline(char *buffer);
int     *ft_check_arg(char **ptr);
char	*get_next_line(int fd);
char    **ft_getarg(char **av);
char    **parsing(char **av);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *s);


void    ft_rrr(t_list **stack_a, t_list **stack_b);
void    ft_ss(t_list **stack_a, t_list **stack_b);
void    ft_rr(t_list **stack_a, t_list **stack_b);
void    ft_pa(t_list **stack_a, t_list **stack_b);
void    ft_pb(t_list **stack_a, t_list **stack_b);
void    ft_rra(t_list **list, int i);
void    ft_rrb(t_list **list, int i);
void    ft_ra(t_list **list, int i);
void    ft_rb(t_list **list, int i);
void    ft_sa(t_list **list, int i);
void    ft_sb(t_list **list, int i);

#endif