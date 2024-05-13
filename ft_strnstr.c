/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:20:55 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 10:28:18 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
The strnstr() function locates the first occurence of the null-terminated 
string needle in the string haystack, where not more than len characters are 
searched. Characters that appear after a '\0' character are not searched.
RETURN VALUES
If needle is an empty string, haystack is returned; if needle occurs nowhere 
in haystack, NULL is returned; otherwise a pointer to the first character of 
the first occurence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_index;
	size_t	i;

	l_index = 0;
	i = 0;
	if (*little == '\0')
		return ((char *) big);
	while ((i < len) && (big[i]))
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
