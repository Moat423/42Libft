/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:01:35 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/26 10:36:29 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		c_c;
	unsigned char		*c_s;

	c_c = c;
	c_s = (unsigned char *) s;
	while ((*c_s != c_c) && (n > 0) && *c_s)
		++c_s;
	return ((void *) c_s);
}
