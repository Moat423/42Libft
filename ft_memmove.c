/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:57:47 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/23 16:30:28 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*c_dest;
	const char	*c_src;

	c_dest = (char *) dest;
	c_src = (const char *) src;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	else if (src < dest)
	{
		while ((i < n))
		{
			c_dest[n - i] = c_src[n - i];
			i++;
		}
	}
	dest = (void *) c_dest;
	return (dest);
}
