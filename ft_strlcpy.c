/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:30:16 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/23 16:46:32 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (((i + 1) < size) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while ((i < size) && size != 0)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
