/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:51:24 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 16:58:27 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*tmp;
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
