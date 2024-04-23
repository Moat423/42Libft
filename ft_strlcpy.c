/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:30:16 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/23 13:32:39 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size - 1 && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i++] = 0;
	return (ft_strlen(src));
}
