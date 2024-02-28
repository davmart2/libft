/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:44:40 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/20 14:46:46 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = 0;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len] && dest_len + (src_len + 1) < size)
	{
		dest[dest_len + src_len] = src[src_len];
		++src_len;
	}
	if (dest_len < size)
		dest[dest_len + src_len] = '\0';
	while (src[src_len])
		++src_len;
	return (dest_len + src_len);
}
