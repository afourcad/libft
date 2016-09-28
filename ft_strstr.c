#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (*haystack)
	{
		while (needle[i] == haystack[i] && needle[i] && haystack[i])
			i++;
		if (!needle[i])
			return ((char *)haystack);
		i = 0;
		haystack++;		
	}
	return (NULL);
}
