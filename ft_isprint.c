#include "libft.h"

int	ft_isprint(int c)
{
	if ((const char)c > 31 && (const char)c < 127)
		return (1);
	return (0);
}
