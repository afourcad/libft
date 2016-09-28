#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (needle == NULL)
		return ((char *)haystack);
	while (*haystack && n)
	{
		i = 0;
		while (haystack[i] && needle[i] && i < n && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return ((char *)haystack);
		n--;
		haystack++;
	}
	return (NULL);
}
