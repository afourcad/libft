/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:18:17 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/11 13:17:57 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s)
{
	unsigned int	s_len;
	unsigned int	s_start;
	unsigned int	s_end;
	char			*strtrim;

	if(!s)
		return(NULL);
	s_len = ft_strlen(s);
	s_start = 0;
	s_end = 0;
	if (s_len == 0)
		return ("\0");
	while ((s[s_start] == ' ' || s[s_start] == '\n' || s[s_start] == '\t')
			&& s[s_start]) 
		s_start++;
	s_end = s_len - 1;
	while ((s[s_end] == ' ' || s[s_end] == '\n' || s[s_end] == '\t')
			&& s_end)
		s_end--;
	if (s_end == 0)
		return ("\0");
	s_end = s_len - s_end;
	strtrim = ft_strndup(s + s_start, s_len - s_start - s_end + 1);
	return (strtrim);
}
