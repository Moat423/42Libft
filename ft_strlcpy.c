/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:30:16 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/29 19:27:22 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_nocrash_strlen(const char *s, size_t size)
{
	size_t	len;

	len = 0;
	while ((size) && s[len])
	{
		size--;
		len++;
	}
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (((i + 1) < size) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		while ((i < size) && size != 0)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (ft_strlen(src));
}
