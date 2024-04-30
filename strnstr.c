/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:20:55 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/29 19:48:53 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_index;
	size_t	i;

	l_index = 0;
	i = 0;
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (0);
	while ((i <= len) && (big[i]))
	{
		if (big[i] != little[0])
			i++;
		while (big[i] == little[l_index] && big[i] && little[l_index])
		{
			i++;
			l_index++;
		}
		if (little[l_index] == '\0')
			return ((char *)((i - l_index) + big));
		else
			l_index = 0;
	}
	return (NULL);
}
