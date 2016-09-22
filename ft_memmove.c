#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp_dest;
	const char	*tmp_src;

	i = 0;
	tmp_dest = dest;
	tmp_src = src;
	if (dest < src)
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
			printf("Y");
		}
	else
		while (n)
		{
			*(tmp_dest + n) = *(tmp_src + n);
			n--;
			printf("N");
		}
	return (dest);
}
