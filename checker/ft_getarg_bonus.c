#include "../push_swap_bonus.h"

char    **ft_getarg(char **av)
{
    char **ptr;
    char *str;
    int l;

    l = 1;
    str = NULL;
    while (av[l])
    {
        str = ft_strjoin(str, av[l]);
        str = ft_strjoin(str, " ");
        if (av[l][0] == '\0')
            return(free(str), NULL);
        l++;
    }
    ptr = ft_split(str, ' ');
    return (free(str), ptr);
}