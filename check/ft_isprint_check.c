/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:59:13 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 10:27:05 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include "../libft.h"

int	isprint_test_cases(void)
{
	int	i;

	i = 0;
	while (ft_isprint(i) == isprint(i) && (i < 129))
	{
		printf("%d, ", i);
		i++;
	}
	if (i == 128)
	{
		printf(COLOR_GREEN"\nisprint successfull\n"COLOR_RESET);
		return (1);
	}
	else
		printf(COLOR_RED"\nisprint unsuccessful, error at %d\n"COLOR_RESET, i);
	return (0);
}
