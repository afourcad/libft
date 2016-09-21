#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	*tmp;
	unsigned int	i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (tmp);
}
