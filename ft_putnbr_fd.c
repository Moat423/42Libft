/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:46:40 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/13 13:20:36 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Outputs the integer ’n’ to the given file
descriptor.
allowed funcitons: write
VARS
n: The integer to output.
fd: The file descriptor on which to write.
*/

#include "libft.h"

int	convertwrite_fd(int n, int fd)
{
	char	num_buff;

	if (n >= 10)
		convertwrite_fd(n / 10, fd);
	num_buff = n % 10 + '0';
	write(fd, &num_buff, 1);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		convertwrite_fd(n, fd);
	}
}
