/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:47:31 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/10 21:00:12 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
RETURN
The array of new strings resulting from the split.
NULL if the allocation fails.
VARS
s: The string to be split.
c: The delimiter character.
*/

#include "libft.h"

unsigned int	count_words(const char *s, char c)
{
	int				words;
	unsigned int	i;

	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if ((s[i] && s[i] != c))
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

char	*strldup(const char *s, size_t len)
{
	char	*dup;

	dup = (char *) malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}

void	make_free(char **sarr, size_t i)
{
	while (i >= 0)
		free(sarr[i--]);
	free(sarr);
}

char	**ft_split(char const *s, char c)
{
	char			**sarr;
	size_t			arr_i;
	size_t			i;

	i = 0;
	arr_i = 0;
	sarr = (char **) malloc(count_words(s, c));
	if (!sarr)
		return (NULL);
	while (s[i])
	{
		while (*s && *s == c)
			s++;
		while (s[i] && s[i] != c)
			i++;
		sarr[arr_i] = strldup(s, i);
		if (sarr[arr_i] == NULL)
		{
			make_free(sarr, i);
			return (NULL);
		}
		i = 0;
		arr_i++;
	}
	return (sarr);
}
