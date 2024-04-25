/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:22:23 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/25 11:43:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'Z') && (c >= 'A'))
		return (1024);
	else if ((c <= 'z') && (c >= 'a'))
		return (1024);
	return (0);
}
