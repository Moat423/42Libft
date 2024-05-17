/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:07:04 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/17 14:54:48 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
* VARS
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: Address of the function used to delete the content of a node if needed.
* RETURN
The new list.
NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst->next)
	{
		content = f(lst->content);
		if (content)
			new_node = ft_lstnew(content);
		else
			free(content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	if (!lst)
		return (NULL);
	return (new_lst);
}
