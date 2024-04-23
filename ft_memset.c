/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:26:02 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/22 13:36:30 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	int	i;

	i = 0;
	c = (unsigned char) c;
	while (i < n)
		s[i] = c;
	return (s);
}
