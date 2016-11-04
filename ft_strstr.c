/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:55:27 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 16:56:43 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
