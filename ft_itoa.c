/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:16:43 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/10 17:46:12 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
RETURN
The string representing the integer.
NULL if the allocation fails.
VARS
n: the integer to convert.
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*num;
	unsigned int	size;
	int				n_for_size;

	size = 0;
	if (n == -2147483648)
		return ("-2147483648\0");
	if (n <= 0)
		size++;
	while (n_for_size)
	{
		n_for_size /= 10;
		size++;
	}
	num = (char *) malloc (size + 1);
	if (n <= 0)
		num[0] = '-';
	while (n)
	{
		num[size--] = '0' + (n % 10);
		n /= 10;
	}
	return (num);
}
