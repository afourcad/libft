/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:50:20 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 17:01:11 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	const char		*tmp_src;
	char			*tmp_dest;

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
		return (NULL);
}
