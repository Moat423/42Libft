/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:53:19 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/10 17:12:29 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
 RETURN:
The trimmed string.
NULL if the allocation fails.
 VARS:
s1: The string to be trimmed.
set: The reference set of characters to trim.
strimm: the trimmed output string.
*/

#include "libft.h"

static size_t	count_allocation_size(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s1[i] && (ft_strchr(set, s1[i]) != NULL))
	{
		count++;
		i++;
	}
	if (i == ft_strlen(s1))
		return (count);
	i = ft_strlen(s1) + 1;
	while (i != 0 && (ft_strrchr(set, s1[i]) != NULL))
	{
		i--;
		count++;
	}
	return (count);
}

char	*fill_string(char const *s1, char const *set, char *dst, size_t size)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i]) != NULL))
		i++;
	ft_strlcpy(dst, s1 + i, size + 1);
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*strimm;

	size = count_allocation_size(s1, set);
	strimm = (char *) malloc(size + 1);
	strimm = fill_string(s1, set, strimm, size);
	return (strimm);
}
