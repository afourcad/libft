#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	unsigned int	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
