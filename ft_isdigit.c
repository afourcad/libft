#include "libft.h"

int	ft_isdigit(int c)
{
	if ((const char)c >= '0' && (const char)c <= '9')
		return (1);
	else
		return (0);
}
