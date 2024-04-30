/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:59:13 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/22 12:08:33 by lmeubrin         ###   ########.fr       */
/*                                                                             */
/* ************************************************************************** */

#include "libft_check.h"
#include "../libft.h"

void	ft_isprint_check(void)
{
	int	i;

	i = 0;
	while (i < 129)
	{
		printf("%d, ", i);
		while (ft_isprint(i) == isprint(i))
			i++;
	}
	if (i == 128)
		printf("\nisprint successfull\n");
	else
		printf("\nisprint unsuccessful, error at %d\n", i);
}
