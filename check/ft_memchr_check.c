/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:48:27 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/26 13:48:32 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	memchr_test_cases(void)
{
	int	c;
	size_t	n;
	int	arr_num[] = {4, 17, 0, 0, 19384, 3};
	int	empty_arr_num[] = {};
	char	arr_str[] = "Hello World!";
	char	empty_arr_str[] = "";

	c = 0;
	n = 0;
	while (c < 130)
	{
		while (n < 17)
		{
			assert((memchr((const void *) arr_num, c, n)) == (ft_memchr((const void *) arr_num, c, n)));
			assert((memchr((const void *) empty_arr_num, c, n)) == (ft_memchr((const void *) empty_arr_num, c, n)));
			assert((memchr((const void *) arr_str, c, n)) == (ft_memchr((const void *) arr_str, c, n)));
			assert((memchr((const void *) empty_arr_str, c, n)) == (ft_memchr((const void *) empty_arr_num, c, n)));
			n += 5;
		}
	c += 5;
	}
	return (1);
}
