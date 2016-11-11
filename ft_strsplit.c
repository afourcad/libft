/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:18:14 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/11 20:19:47 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char 		*ft_next_word(const char *s, char c)
{	
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	while (s[i] == c && s[i])
		i++;
	return ((char*)s + i);
}

static unsigned int	ft_nbr_words(const char *s, char c)
{
	unsigned int	nbr_words;

	nbr_words = 0;
	while (*s)
	{
		s = ft_next_word(s, c);
		nbr_words++;
	}
	return (nbr_words);
}

static int			ft_word_len(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char 			**split;
	unsigned int	i;

	if (!s || !c)
		return (NULL);
	i = 0;
	while (*s == c && *s)
		s++;
	if ((split = (char **)malloc(sizeof(char) * ft_nbr_words(s, c))) == NULL)
		return (NULL);
	while (*s)
	{
		split[i] = ft_strndup(s, ft_word_len(s, c));
		s = ft_next_word(s, c);
		printf("split[%d] : |%s|\n", i, split[i]);
		i++;
	}
	split[i] = NULL;
	i = 0;
	ft_putstr("------------------------------\n");
	while (split[i])
	{
		printf("split[%d] : |%s|\n", i, split[i]);
		i++;
	}
	return (split);
}

int main(int ac, char **av)
{
	char **tab;

	if (ac != 3)
		return (0);
	tab = ft_strsplit(av[1], av[2][0]);
	return (0);
}
