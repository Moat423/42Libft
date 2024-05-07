/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:13:55 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/07 18:24:31 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if ((n == 0) || (s1 == NULL) || (s2 == NULL))
		return (0);
	while (n > 0)
	{
		if (*(unsigned char *) s1 != *(unsigned char *) s2)
			return (s1 - s2);
		++s1;
		++s2;
		n--;
	}
	return (0);
}
