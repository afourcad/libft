#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				nbr;
	int				is_neg;

	i = 0;
	nbr = 0;
	is_neg = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			is_neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr [i] <= '9')
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (nbr * is_neg);
		nbr = nbr * 10 + nptr[i] - 48; 
		i++;
	}
	return (nbr * is_neg);
}
