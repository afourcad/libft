/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:19:39 by afourcad          #+#    #+#             */
/*   Updated: 2016/11/04 18:39:23 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define TEST_ATOI(value) 	ft = ft_atoi(value);\
						base = atoi(value);\
						printf("ft_atoi(value) = %d\n", ft);\
						printf("atoi(value) = %d\n\n", base);\
						is_good = (strcmp(ft, base) != 0) ? is_good : is_good++;


int	ft_test(void)
{
	int	res;

	res = 0;
	test_atoi(&res);
	/*test_bzero(&res, );
	test_isalnum(&res, );
	test_isalpha(&res, );
	test_isascii(&res, );
	test_isdigit(&res, );
	test_isprint(&res, );
	test_memalloc(&res, );
	test_memccpy(&res, );
	test_memchr(&res, );
	test_memcmp(&res, );
	test_memmove(&res, );
	test_memset(&res, );
	test_putchar(&res, );
	test_str(&res, );
	test_strcat(&res, );
	test_strchr(&res, );
	test_strcmp(&res, );
	test_strcpy(&res, );
	test_strdup(&res, );
	test_strlen(&res, );
	test_strncat(&res, );
	test_strncmp(&res, );
	test_strncpy(&res, );
	test_strnstr(&res, );
	test_strrchr(&res, );
	test_ft_strstr(&res, );
	test_libft(&res, ); */
	return (res);
}

void	test_atoi(int *res)
{
	int	ft;
	int	base;
	int	is_good;

	is_good = 0;
	printf("-----FT_ATOI-----\n\n")
	TEST_ATOI("42");
	TEST_ATOI("-42");
	TEST_ATOI("--42");
	TEST_ATOI("+42");
	*res = (is_good == 4) ? *res++ : *res;
}

int	main()
{
	int	result;

	result = ft_test();
}
