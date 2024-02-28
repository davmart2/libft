/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:34:55 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/19 15:02:37 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*init;
	char	*cpy;

	init = (char *)dst;
	cpy = (char *)src;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n > 0)
	{
		*init = *cpy;
		init++;
		cpy++;
		n--;
	}
	return (dst);
}
