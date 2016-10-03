#include "libft.h"

int	ft_isalpha(int c)
{
	if (((const char)c >= 'a' && (const char)c <= 'z')
			|| ((const char)c >= 'A' && (const char)c <= 'Z'))
		return (1);
	else
		return (0);
}
