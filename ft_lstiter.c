/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:56:05 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/17 14:30:34 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
* Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
* VARS
* lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*buff;

	buff = lst;
	if (buff && f)
	{
		while (buff->next)
		{
			f(buff->content);
			buff = buff->next;
		}
	}
}
