/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:22:33 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/26 12:43:01 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*mem_aloc;
	size_t	cont;

	cont = 0;
	total_size = count * size;
	mem_aloc = malloc(total_size);
	if (mem_aloc == NULL)
		return (NULL);
	while (cont < total_size)
	{
		*((char *)mem_aloc + cont) = 0;
		cont++;
	}
	return (mem_aloc);
}
