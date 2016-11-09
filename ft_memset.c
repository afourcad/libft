/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:51:24 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 19:35:13 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*tmp;
	unsigned int	i;

	tmp = b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (tmp);
}

int main()
{
	char str[] = "almost every programmer should know memset!";
	  
	ft_memset (str,'-',6);
	printf("%s", str);
    return 0;
}
