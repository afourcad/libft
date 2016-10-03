#include "libft.h"

int	ft_isascii(int c)
{
	if ((const char)c >= 0 && (const char)c <= 127)
		return (1);
	else
		return (0);
}
