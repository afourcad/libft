/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:51:11 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 16:58:08 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp_dest;
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
