/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:57:47 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/23 12:33:43 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*cdest;
	const char	*csrc;

	cdest = (char *) dest;
	csrc = (const char *) src;
	i = 0;
	if (n == 0 || dest == 0 || src == 0)
		cdest[0] = 0;
	else
	{
		while ((i < n) && (csrc[i] != '\0'))
			tmp[i] = (char*)src[i];
		while (i < n)
		dest[i] = tmp[i];
	dest = (void *) cdest;
	}
	return (dest);
}
