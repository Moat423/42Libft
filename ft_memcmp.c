/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:13:55 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/26 15:39:58 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	c_s1 = (unsigned char *) s1;
	c_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (*c_s1 == *c_s2 && *c_s1 && *c_s2 && (n > 0))
	{
		++c_s1;
		++c_s2;
		n--;
	}
	return (c_s1 - c_s2);
}
