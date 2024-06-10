#include "../push_swap_bonus.h"

int ft_isdigit(char *str)
{
     int i;
     
     i = 0;
     if (str[i] == '-' || str[i] == '+')
     {
          if (str[i+1] >= 48 && str[i+1] <= 57)
               i++;
          else
               return (-1);
     }
     while (str[i])
     {
          if (str[i] >= 48 && str[i] <= 57)
               i++;
          else
               return (-1);
     }
     if (ft_atol(str) > INT_MAX || ft_atol(str) < INT_MIN)
          return (-1);
     return (0);
}

int  *ft_check_arg(char **ptr)
{
     int l;

     if (!ptr)
          return (NULL);
     l = 0;
     while (ptr[l])
     {
          if (ft_isdigit(ptr[l]) == -1)
          {
               write(1, "Error\n", 6);
               return (NULL);
          }
          l++;
     }
     return (ft_check_doubles(ptr));
}