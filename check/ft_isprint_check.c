/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:59:13 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/22 12:08:33 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_isprint_check(void)
{
	int	i;

	i = 0;
	while (i < 127)
	{
		printf("%d, ", i);
		assert(ft_isprint(i) == isprint(i));
	}
	printf("\nisprint successfull\n");
}
