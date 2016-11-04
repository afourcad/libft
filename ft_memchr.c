/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:50:37 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 17:03:00 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp_c;
	size_t			i;
	const char		*tmp_s;

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
