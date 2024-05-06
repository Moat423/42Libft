/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:01:35 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/26 15:34:17 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (((unsigned char *) s) && (n > 0))
	{
		if ((*(unsigned char *) s) == ((unsigned char) c))
			return ((void *) s);
		++s;
		n--;
	}
	return (NULL);
}
