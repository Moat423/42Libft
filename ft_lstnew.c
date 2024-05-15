/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 08:40:55 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/14 13:38:51 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRITION
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
RETURN
The new node.
VARS
content: The content to create the node with.
*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
   t_list   *new;
   
   new = (t_list *) malloc(sizeof(*new));
   if (!new)
    return (NULL);
   if (!content)
      new->content = NULL;
   else
      new->content = content;
   new->next = NULL;
   return (new);
}
