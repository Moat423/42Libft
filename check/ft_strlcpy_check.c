/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:42:10 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/22 15:19:11 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "../libft.h"
#include "libft_check.h"

/* this test needs WORK!!!*/

int	strlcpy_test_cases(void)
{
	char	*s1;
	char	*s2;
	const char	*s3 = "huhu";
	char	*s4 = "";
	char	*s5 = "hu";

	s1 = "Krass";
	s2 = "";
	printf(COLOR_BLUE "substr\n" COLOR_RESET);
	assert(ft_strlcpy(s2, "Krass", 5) == 5);
	assert(s1 == s2);
	printf("strlcpy test1 passed, %s", s2);
	assert(ft_strlcpy(s4, s3, 2) == 4);
	assert(s4 == s5);
	printf("strlcpy test2 passed, %s", s4);
	return (1);
}
