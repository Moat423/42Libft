/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:08:07 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/17 14:26:51 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
* Counts the number of nodes in a list.
* VARS
* lst: The beginning of the list.
* RETURN
* The length of the list
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
