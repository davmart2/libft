/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:14:52 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/19 15:44:09 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*init;
	const char	*cpy;

	init = (char *)dst;
	cpy = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (cpy < init && cpy + len > init)
	{
		init += len;
		cpy += len;
		while (len--)
		{
			*(--init) = *(--cpy);
		}
	}
	else
	{
		while (len--)
		{
			*init++ = *cpy++;
		}
	}
	return (dst);
}
