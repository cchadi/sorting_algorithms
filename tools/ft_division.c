#include "../push_swap.h"

int ft_division(int nbr)
{
    int res;
    if (nbr >= 6 && nbr <= 16)
        res = 6;
    else if (nbr <= 100)
        res = 15;
    else
        res = 40;
    return (res);
}