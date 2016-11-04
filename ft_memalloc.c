/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:50:06 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 17:02:16 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;

	*mem = 0;
	if ((mem = malloc(sizeof(*mem) * size)) == NULL)
		return (NULL);
	mem[0] = 0;
	return (mem);
}
