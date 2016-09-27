#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp_c;
	size_t		i;
	const char	*tmp_s;

	tmp_c = (unsigned char)c;
	tmp_s = (const char *)s;
	if ()
		while (i < n)
		{
			if (tmp_s[i] == tmp_c)
				return ((void *)tmp_s + i);
			i++;
		}
	return (NULL);
}
