/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:54:03 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 16:54:04 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*s_cpy;
	unsigned int	i;

	i = 0;
	s_cpy = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[i])
	{
		s_cpy[i] = s[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
