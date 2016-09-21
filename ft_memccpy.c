#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	const int	*tmp_src;
	int		*tmp_dest;

	tmp_src = src;
	tmp_dest = dest;
	i = 0;
	while (i < n && tmp_src[i] != c)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	if (tmp_src[i] == c)
	{
		tmp_dest[i] = c;
		return (dest + i + 1);
	}
	else
		return (NULL);;
}
