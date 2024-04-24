/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:48:49 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/24 14:22:33 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*strchr(const char *s, int c)
{
	char	c_c;
	int		i;

	i = 0;
	c_c = (char) c;
	while (s[i])
	{
		if (c_c == s[i])
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
