/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:10:47 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/23 17:53:22 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;
	unsigned int		cont;

	p = str;
	ch = (unsigned char)c;
	cont = 0;
	while (cont < n)
	{
		if (*p == ch)
		{
			return ((void *)p);
		}
		p++;
		cont++;
	}
	return (NULL);
}
