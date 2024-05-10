/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:16:26 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/07 20:11:37 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* this overflow check, looks at whether I would overflow when i give malloc 
* count*size as an argument because it also works with size_t. if it overflow,
* it will allocate too little space but seem normal. That is why I would like
* to add this, so I return NULl in that case, as to not write more than the
* allocated size
	if (count > SIZE_MAX / size)
		return (NULL);

*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
