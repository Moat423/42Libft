/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:57:17 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/25 11:46:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*strrchr(const char *s, int c)
{
	char	c_c;
	int		i;
	int		len;

	i = (ft_strlen(s)) - 1;
	c_c = (char) c;
	while (i >= 0)
	{
		if (c_c == s[i])
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
